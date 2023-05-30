import subprocess

#plan_name = 'plan-'
delay = 13.

hosts = {'lauv-fridtjof': ('10.0.10.70', '6002'),
         'lauv-thor': ('10.0.80.20', '6002'),
         'lauv-simulator-1': ('localhost', '6002'),
         'lauv-simulator-2': ('localhost', '6003')}

dune_sendmsg = '../../build/dune-sendmsg'

def send_start(vehicle, use_obstacle:bool=False):
    if use_obstacle:
        plan_name = 'plan-obstacle-'
    else:
        plan_name = 'plan-'
    h = hosts[vehicle]
    cmd_plan = [dune_sendmsg, h[0], h[1], 'PlanControl', '0', plan_name+vehicle.strip('lauv-'), '1']
    subprocess.run(cmd_plan)
    cmd_start = [dune_sendmsg, h[0], h[1], 'ExperimentControl', 'start', 'nsb', str(use_obstacle).lower(), str(delay)]
    subprocess.run(cmd_start)

if __name__ == '__main__':
    print('Enter vehicles separated by spaces:')
    vehicles = input().split(' ')
    print('Use obstacle (y/N)?')
    use_obstacle = input().lower() == 'y'

    for v in vehicles:
        send_start(v, use_obstacle)
