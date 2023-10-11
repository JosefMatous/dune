import wgs84
import subprocess
import numpy as np

## Parameters
lat0 = np.deg2rad(63.435853) # origin latitude
lon0 = np.deg2rad(10.357786) # origin longitude
depth = 0.
a = 100. # semimajor axis
b = 80. # semiminor axis
c = 0. # depth oscillations
wp_offset_x = 70.
wp_offset_y = 0.
wp_offset_z = 0.
wp_radius = 50.
wp_length = 250.
x_obstacle = '0., -100.'
y_obstacle = '80., 0.'
v_x_obstacle = '0., 0.'
v_y_obstacle = '0., 0.'
formation_shape = [[0., -25., 0.], [0., 25., 0.], [25., 0., 0.], [-25., 0., 0.]]
initial_positions_ellipse = [[a+40., -10., 0.], [a-20., -10., 0.], [a+10., 25., 0.], [a+10., -45., 0.]]
initial_positions_wp = [[wp_offset_x-10., wp_offset_y-50., 0.], [wp_offset_x-10., wp_offset_y, 0.], [wp_offset_x+25., wp_offset_y-25., 0.], [wp_offset_x-45., wp_offset_y-25., 0.]]
s_ellipse = np.linspace(0., 9*np.pi/4, 19)
s_waypoint = np.concatenate((np.linspace(0., wp_length, 10, endpoint=False), 
                             np.linspace(wp_length, wp_length+2*wp_radius, 5, endpoint=False), 
                             np.linspace(wp_length+2*wp_radius, 2*wp_length+2*wp_radius+30., 13, endpoint=True)), axis=0)

hosts = {'lauv-fridtjof': ('10.0.10.70', '6002', '6032'),
         'lauv-thor': ('10.0.80.20', '6002', '6031'),
         'lauv-simulator-1': ('localhost', '6002', '6033'),
         'lauv-simulator-2': ('localhost', '6003', '6034'),
         'lauv-simulator-3': ('localhost', '6004', '6035'),
         'lauv-simulator-4': ('localhost', '6005', '6036')}

dune_sendmsg = '../../build/dune-sendmsg'

def set_parameters(vehicle, entity, parameters):
    h = hosts[vehicle]
    cmd = [dune_sendmsg, h[0], h[1], 'SetEntityParameters', entity] + parameters
    return subprocess.run(cmd)

def set_formation_shape(vehicle_list):
    for i in range(len(vehicle_list)):
        v = vehicle_list[i]
        f = formation_shape[i]
        set_parameters(v, 'NSB Parameters', 
                       ['Formation Keeping -- Formation x', str(f[0]), 
                        'Formation Keeping -- Formation y', str(f[1]), 
                        'Formation Keeping -- Formation z', str(f[2])])
        
def generate_waypoints():
    x = '{}, {}, {}, {}'.format(wp_offset_x, wp_offset_x+wp_length, wp_offset_x+wp_length, wp_offset_x)
    y = '{}, {}, {}, {}'.format(wp_offset_y, wp_offset_y, wp_offset_y+2*wp_radius, wp_offset_y+2*wp_radius)
    z = '{}, {}, {}, {}'.format(wp_offset_z, wp_offset_z+c, wp_offset_z+c, wp_offset_z)

    return x, y, z

def set_path_parameters(vehicle_list):
    wp_x, wp_y, wp_z = generate_waypoints()
    for v in vehicle_list:
        set_parameters(v, 'NSB Parameters',
                        ['Ellipse -- Origin Latitude', str(lat0),
                         'Ellipse -- Origin Longitude', str(lon0),
                         'Ellipse -- Semimajor Axis', str(a),
                         'Ellipse -- Semiminor Axis', str(b),
                         'Waypoints -- Origin Latitude', str(lat0),
                         'Waypoints -- Origin Longitude', str(lon0),
                         'Waypoints -- x-offset', wp_x,
                         'Waypoints -- y-offset', wp_y,
                         'Waypoints -- Depth', wp_z,
                         'Waypoints -- Dubins Radius', str(wp_radius)])
        
def set_obstacle(vehicle_list):
     for v in vehicle_list:
        set_parameters(v, 'NSB Parameters',
                        ['Obstacle -- Origin Latitude', str(lat0),
                         'Obstacle -- Origin Longitude', str(lon0),
                         'Obstacle -- Offset x', x_obstacle,
                         'Obstacle -- Offset y', y_obstacle,
                         'Obstacle -- Velocity x', v_x_obstacle,
                         'Obstacle -- Velocity y', v_y_obstacle]) 

def set_nsb(vehicle_list, use_ellipse:bool=True):
    if use_ellipse:
        cmd = ['Experiment Stop Parameter', str(2*np.pi)]
    else:
        cmd = ['Experiment Stop Parameter', str(2*wp_length+2*wp_radius)]
    for v in vehicle_list:
        set_parameters(v, 'Distributed NSB', cmd)
        
def set_plan_generator(vehicle_list, use_obstacle:bool=False, use_ellipse:bool=True):
    initial_formation = initial_positions_ellipse if use_ellipse else initial_positions_wp
    barycenter = np.mean(initial_formation, 0)
    lat_b, lon_b, _ = wgs84.displace(barycenter[0], barycenter[1], barycenter[2], lat0, lon0, 0.)
    if use_ellipse:
        param_list = str(s_ellipse[0])
        for s_i in s_ellipse[1:]:
            param_list += ', {}'.format(s_i) 
    else:
        param_list = str(s_waypoint[0])
        for s_i in s_waypoint[1:]:
            param_list += ', {}'.format(s_i)
    if use_obstacle:
        plan_name = 'plan-obstacle-'
    else:
        plan_name = 'plan-'
    for i in range(len(vehicle_list)):
        v = vehicle_list[i]
        f = initial_formation[i]
        lat_v, lon_v, _ = wgs84.displace(f[0], f[1], f[2], lat0, lon0, 0.)
        set_parameters(v, 'NSB Plan Generator',
                       ['Plan Name', plan_name + v.strip('lauv-'),
                        'Barycenter -- Initial Position', '{}, {}, {}'.format(lat_b, lon_b, barycenter[2]),
                        'Vehicle -- Initial Position', '{}, {}, {}'.format(lat_v, lon_v, f[2]),
                        'Use Obstacle', str(use_obstacle).lower(),
                        'Use Ellipse', str(use_ellipse).lower(),
                        'Waypoint Parameters', param_list])
        
if __name__ == '__main__':
    print('Enter vehicles separated by spaces:')
    vehicles = input().split(' ')
    print('Use ellipse (Y/n)?')
    use_ellipse = input().lower() != 'n'
    print('Use obstacle (y/N)?')
    use_obstacle = input().lower() == 'y'

    set_formation_shape(vehicles)
    set_path_parameters(vehicles)
    set_obstacle(vehicles)
    set_plan_generator(vehicles, use_obstacle, use_ellipse)
    set_nsb(vehicles, use_ellipse)
