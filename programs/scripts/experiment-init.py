import subprocess

delay = 13.

hosts = {'lauv-fridtjof': ('10.0.10.70', '6002'),
         'lauv-thor': ('10.0.80.20', '6002'),
         'lauv-simulator-1': ('localhost', '6002'),
         'lauv-simulator-2': ('localhost', '6003'),
         'lauv-simulator-3': ('localhost', '6004'),
         'lauv-simulator-4': ('localhost', '6005')}

plan_postfix = "_start"

dune_sendmsg = '../../build/dune-sendmsg'

def send_start(vehicle, use_obstacle:bool=False):
    if use_obstacle:
        plan_name = 'plan-obstacle-'
    else:
        plan_name = 'plan-'
    h = hosts[vehicle]
    cmd_plan = [dune_sendmsg, h[0], h[1], 'PlanControl', '0', plan_name+vehicle.strip('lauv-')+plan_postfix, '1']
    subprocess.run(cmd_plan)

if __name__ == '__main__':
    print('Enter vehicles separated by spaces:')
    vehicles = input().split(' ')
    print('Use obstacle (y/N)?')
    use_obstacle = input().lower() == 'y'
    print('Use obstacle: {}'.format(use_obstacle))

    for v in vehicles:
        send_start(v, use_obstacle)
