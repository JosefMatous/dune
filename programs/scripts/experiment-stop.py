import subprocess

#plan_name = 'plan-'
delay = 0.

hosts = {'lauv-fridtjof': ('10.0.10.70', '6002'),
         'lauv-thor': ('10.0.80.20', '6002'),
         'lauv-simulator-1': ('localhost', '6002'),
         'lauv-simulator-2': ('localhost', '6003'),
         'lauv-simulator-3': ('localhost', '6004'),
         'lauv-simulator-4': ('localhost', '6005')}

dune_sendmsg = '../../build/dune-sendmsg'

def send_start(vehicle, use_obstacle:bool=False, use_ellipse:bool=False):
    if use_obstacle:
        plan_name = 'plan-obstacle-'
    else:
        plan_name = 'plan-'
    h = hosts[vehicle]
    cmd_plan = [dune_sendmsg, h[0], h[1], 'PlanControl', '1', plan_name+vehicle.strip('lauv-'), '1']
    subprocess.run(cmd_plan)
    cmd_type = 'nsb_ellipse' if use_ellipse else 'nsb_wp'
    cmd_start = [dune_sendmsg, h[0], h[1], 'ExperimentControl', 'stop', cmd_type, str(use_obstacle).lower(), str(delay)]
    subprocess.run(cmd_start)

if __name__ == '__main__':
    print('Enter vehicles separated by spaces:')
    vehicles = input().split(' ')
    print('Use ellipse (y/N)?')
    use_ellipse = input().lower() == 'y'
    print('Use obstacle (y/N)?')
    use_obstacle = input().lower() == 'y'

    for v in vehicles:
        send_start(v, use_obstacle, use_ellipse)
