import imcpy
from imcpy.actors import DynamicActor
from imcpy.decorators import Subscribe, Periodic

import imcpy.coordinates
import numpy as np

class Trajectory:
    # Returns a list of (north, east, depth, speed) points on the trajectory
    def get_points(self):
        return [(0.,0.,0.,0.)]
    
    # Returns the parameters of the trajectory as a dictionary
    def get_paramdict(self):
        return {}

class FigureEightTrajectory(Trajectory):
    def __init__(self, x0, y0, z0, a, b, c, k):
        self.x0 = x0
        self.y0 = y0
        self.z0 = z0
        self.a = a
        self.b = b
        self.c = c
        self.k = k

    def get_points(self):
        points = []
        t_step = 0.25*np.pi / self.k
        t_stop = 2.5*np.pi / self.k
        for t in np.arange(0, t_stop, t_step):
            arg = self.k * t
            x = self.x0 + self.a * np.cos(arg)
            y = self.y0 + self.b * np.sin(2*arg)
            z = self.z0 + self.c * np.cos(2*arg)

            v_x = -self.a * self.k * np.sin(arg)
            v_y = 2*self.b * self.k * np.cos(2*arg)
            v_z = -2*self.c * self.k * np.sin(2*arg)
            U = np.sqrt(v_x**2 + v_y**2 + v_z**2)

            points.append((x, y, z, U))
        return points
    
    def get_paramdict(self):
        return {
            'Origin x':str(self.x0), 
            'Origin y':str(self.y0),
            'Origin z':str(self.z0),
            'Length':str(self.a),
            'Width':str(self.b),
            'Depth':str(self.c),
            'Wavenumber':str(self.k)
        }
        

class Configurator(DynamicActor):
    def __init__(self, target, plan_name:str, trajectory:Trajectory, e0:float, k_e:float):
        super().__init__()
        self.target = target
        self.plan_name = plan_name
        self.trajectory = trajectory
        self.heartbeat.append(target)
        self.ack = False
        self.e0 = e0
        self.k_e = k_e
        self.lat0 = None
        self.lon0 = None

    @Periodic(5)
    def configure(self):
        if (self.has_latlon()) and (not self.ack):
            print('Sending configuration')
            try:
                node = self.resolve_node_id(self.target)

                self.send(node, self.generate_plan())

                params = self.generate_parameters()
                for param in params:
                    self.send(node, param)

            except KeyError:
                pass
        if self.has_latlon() and self.ack:
            print('Configuration acknowledged by the vehicle, exitting ...')
            self.stop()

    def generate_plan(self):
        points = self.trajectory.get_points()
        if len(points) < 2:
            return None

        spec = imcpy.PlanSpecification()
        spec.plan_id = self.plan_name
        spec.start_man_id = '1'
        spec.description = 'Trajectory'

        for i in np.arange(1, len(points)):
            p_i = points[i]
            
            wp = imcpy.Goto()
            lat, lon = imcpy.coordinates.WGS84.displace(self.lat0, self.lon0, p_i[0], p_i[1])
            wp.lat = lat
            wp.lon = lon
            wp.z = p_i[2]
            wp.z_units = imcpy.ZUnits.DEPTH
            wp.speed = p_i[3]
            wp.speed_units = imcpy.SpeedUnits.METERS_PS

            pman = imcpy.PlanManeuver()
            pman.data = wp
            pman.maneuver_id = str(i)
            spec.maneuvers.append(pman)

            if (i > 1):
                tran = imcpy.PlanTransition()
                tran.dest_man = str(i)
                tran.source_man = str(i-1)
                tran.conditions = 'ManeuverIsDone'
                spec.transitions.append(tran)
        
        pc = imcpy.PlanControl()
        pc.type = imcpy.PlanControl.TypeEnum.REQUEST
        pc.op = imcpy.PlanControl.OperationEnum.LOAD
        pc.flags = imcpy.PlanControl.FlagsBits.CALIBRATE
        pc.plan_id = self.plan_name
        pc.arg = spec

        return pc

    def generate_parameters(self):
        param_trajectory = imcpy.SetEntityParameters()
        param_trajectory.name = 'Reference Trajectory'
        Configurator.add_params(param_trajectory.params, self.trajectory.get_paramdict())

        param_controller = imcpy.SetEntityParameters()
        param_controller.name = 'Trajectory Controller'
        Configurator.add_params(param_controller.params, {'Minimum Hand Length':str(self.e0), 'Headway Gain':str(self.k_e)})

        param_pathctrl = imcpy.SetEntityParameters()
        param_pathctrl.name = 'Path Controller'
        Configurator.add_params(param_pathctrl.params, {'Minimum Hand Length':str(self.e0), 'Headway Gain':str(self.k_e)})

        return (param_trajectory, param_controller, param_pathctrl)

    @staticmethod
    def add_params(paramlist:imcpy.MessageListEntityParameter, namevaldict:dict):
        for name, value in namevaldict.items():
            p = imcpy.EntityParameter()
            p.name = name
            p.value = value
            paramlist.append(p)

    def is_from_target(self, msg):
        try:
            node = self.resolve_node_id(msg)
            return node.sys_name == self.target
        except KeyError:
            return False
        
    def has_latlon(self):
        return (self.lat0 is not None) and (self.lon0 is not None)
        
    @Subscribe(imcpy.EstimatedState)
    def recv_estate(self, msg):
        self.lat0 = msg.lat
        self.lon0 = msg.lon

    @Subscribe(imcpy.PlanControl)
    def recv_plancontrol(self, msg):
        if self.is_from_target(msg):
            if msg.type == imcpy.PlanControl.TypeEnum.SUCCESS and msg.plan_id == self.plan_name:
                self.ack = True

x0_default = 0.0
y0_default = 0.0
z0_default = 7.5
a_default = 70.0
b_default = 35.0
c_default = 5.0
k_default = np.pi / 200

e0_default = 1.0
k_e_default = 0.5

def query_value(prompt:str, v_default:float):
    print('{} (default {})'.format(prompt, v_default))
    try:
        v = float(input())
    except:
        v = v_default
    return v

if __name__ == "__main__":
    print('Vehicle name:')
    veh = input()
    print('Plan name:')
    plan = input()

    print('')
    print('Controller parameters:')
    e_ss = query_value('Steady-State Hand Length', e0_default)
    k_e = query_value('Headway Gain', k_e_default)
    e0 = e_ss * np.sqrt(1 - k_e**2)

    print('')
    print('Trajectory parameters:')
    x0 = query_value('Origin x', x0_default)
    y0 = query_value('Origin y', y0_default)
    z0 = query_value('Origin z', z0_default)
    a = query_value('Length', a_default)
    b = query_value('Width', b_default)
    c = query_value('Depth', c_default)
    k = query_value('Wavenumber', k_default)

    cfg = Configurator(veh, plan, FigureEightTrajectory(x0, y0, z0, a, b, c, k), e0, k_e)
    cfg.run()
