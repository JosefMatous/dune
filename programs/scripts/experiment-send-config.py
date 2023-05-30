import wgs84
import subprocess
import numpy as np

## Parameters
lat0 = np.deg2rad(63.435853) # origin latitude
lon0 = np.deg2rad(10.357786) # origin longitude
a = 100. # semimajor axis
b = 80. # semiminor axis
x_obstacle = 0.
y_obstacle = 80.
formation_shape = [[0., -25., 0.], [0., 25., 0.], [25., 0., 0.], [-25., 0., 0.]]
initial_formation = [[35., 0., 0.], [-30., 0., 0.], [0., 25., 0.], [0., -30., 0]]

hosts = {'lauv-fridtjof': ('10.0.10.70', '6002', '6032'),
         'lauv-thor': ('10.0.80.20', '6002', '6031'),
         'lauv-simulator-1': ('localhost', '6002', '6033'),
         'lauv-simulator-2': ('localhost', '6003', '6034')}
         #'lauv-simulator-1': ('10.0.200.40', '6002', '6033'),
         #'lauv-simulator-2': ('10.0.200.40', '6003', '6034')}

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

def set_path_parameters(vehicle_list):
    for v in vehicle_list:
        set_parameters(v, 'NSB Parameters',
                        ['Ellipse -- Origin Latitude', str(lat0),
                         'Ellipse -- Origin Longitude', str(lon0),
                         'Ellipse -- Semimajor Axis', str(a),
                         'Ellipse -- Semiminor Axis', str(b)])
        
def set_obstacle(vehicle_list):
     lat_obs, lon_obs, _ = wgs84.displace(x_obstacle, y_obstacle, 0., lat0, lon0, 0.)
     for v in vehicle_list:
        set_parameters(v, 'NSB Parameters',
                        ['Obstacle -- Initial Latitude', str(lat_obs),
                         'Obstacle -- Initial Longitude', str(lon_obs)])   
        
def set_plan_generator(vehicle_list, use_obstacle:bool=False):
    barycenter = np.mean(initial_formation, 0)
    lat_b, lon_b, _ = wgs84.displace(barycenter[0] + a, barycenter[1], barycenter[2], lat0, lon0, 0.)
    if use_obstacle:
        plan_name = 'plan-obstacle-'
    else:
        plan_name = 'plan-'
    for i in range(len(vehicle_list)):
        v = vehicle_list[i]
        f = initial_formation[i]
        lat_v, lon_v, _ = wgs84.displace(f[0] + a, f[1], f[2], lat0, lon0, 0.)
        set_parameters(v, 'NSB Plan Generator',
                       ['Plan Name', plan_name + v.strip('lauv-'),
                        'Barycenter -- Initial Position', '{}, {}, {}'.format(lat_b, lon_b, barycenter[2]),
                        'Vehicle -- Initial Position', '{}, {}, {}'.format(lat_v, lon_v, f[2]),
                        'Use Obstacle', str(use_obstacle).lower()])
        
if __name__ == '__main__':
    print('Enter vehicles separated by spaces:')
    vehicles = input().split(' ')
    print('Use obstacle (y/N)?')
    use_obstacle = input().lower() == 'y'

    set_formation_shape(vehicles)
    set_path_parameters(vehicles)
    set_obstacle(vehicles)
    set_plan_generator(vehicles, use_obstacle)
