from imcpy.coordinates import WGS84
import numpy as np
#from pyperclip import copy
import random
import string

def degree_minute_to_radian(deg, min):
    return (deg + min/60.) * (np.pi / 180.)

def radian_to_minute_degree(rad):
    if rad >= 0.:
        deg_full = rad * 180. / np.pi
        deg = np.floor(deg_full)
        min = (deg_full - deg) * 60.
        return deg, min
    else:
        deg_full = -rad * 180. / np.pi
        deg = np.floor(deg_full)
        min = (deg_full - deg) * 60.
        return -deg, -min

def generate_waypoints(lat0, lon0, offset, orientation, length1, length2):
    return [(WGS84.displace(lat0, lon0, offset[i][0] - length1*np.cos(orientation[i]), offset[i][1] - length1*np.sin(orientation[i])), 
             WGS84.displace(lat0, lon0, offset[i][0], offset[i][1]),
             WGS84.displace(lat0, lon0, offset[i][0] + length2*np.cos(orientation[i]), offset[i][1] + length2*np.sin(orientation[i]))) for i in range(len(offset))]

def print_coordinate(c, end='\n'):
    Ndeg, Nmin = radian_to_minute_degree(c[0])
    if Ndeg >= 0.:
        Nstr = "{:3.0f}N{:2.09}".format(Ndeg, Nmin)
    else:
        Nstr = "{:3.0f}S{:2.09}".format(-Ndeg, np.abs(Nmin))

    Edeg, Emin = radian_to_minute_degree(c[1])
    if Edeg >= 0.:
        Estr = "{:3.0f}E{:2.09}".format(Edeg, Emin)
    else:
        Estr = "{:3.0f}W{:2.09}".format(-Edeg, np.abs(Emin))
    
    print("({}, {})".format(Nstr, Estr), end=end)

def generate_random_id(id_list):
    id_length = 6
    chars = string.ascii_lowercase.join(string.digits)
    id = ''.join(random.choice(chars) for i in range(id_length))
    while id in id_list:
        id = ''.join(random.choice(chars) for i in range(id_length))
    id_list.append(id)
    return id

if __name__ == "__main__":
    offset = [(15.-75.,0.), (-20.-75.,0.), (55.-75.,20.), (55.-75.,-20.), (-45.-75.,20.), (-45.-75.,-20.)]
    orientation = [0., 0., -np.pi/2, np.pi/2, 0., 0.]
    L1 = 60.
    L2 = 200.
    
    lat0 = 0.71882959
    lon0 = -0.15195186

    wp = generate_waypoints(lat0, lon0, offset, orientation, L1, L2)
    print("Generated waypoints:")
    for w in wp:
        print_coordinate(w[0], end=' :: ')
        print_coordinate(w[1], end=' :: ')
        print_coordinate(w[2])

    """
    print('Copy waypoints to clipboard?', end=' ')
    yn = input()
    if (yn == 'y'):
        print("Copying waypoints to clipboard")
        for i in range(len(wp)):
            for j in range(2):
                copy('{:3.15f}'.format(np.rad2deg(wp[i][j][0])))
                print("Vehicle {}, coordinate {}, latitude".format(i+1, j+1), end='; ')
                input()
                copy('{:3.15f}'.format(np.rad2deg(wp[i][j][1])))
                print("Vehicle {}, coordinate {}, longitude".format(i+1, j+1))
                input()
    """

    print('Enter output file:', end=' ')
    out = input()
    if (out != ''):
        out_file = open(out, 'w')
        id_list = []
        # Generate starting maneuvers
        t_file = open('plan_template_start.xml', 'r')
        template = t_file.read()
        t_file.close()
        for i in range(len(wp)):
            # Blank spaces in the plan:
            # plan number, plan number, Goto 1 id, Goto 1 id, Goto 1 latitude, Goto 1 longitude, 
            # Goto 2 id, Goto 2 id, Goto 2 latitude, Goto 2 longitude, Edge id
            goto1_id = generate_random_id(id_list)
            goto2_id = generate_random_id(id_list)
            edge_id = generate_random_id(id_list)
            goto1_lat = '{:3.15f}'.format(np.rad2deg(wp[i][0][0]))
            goto1_lon = '{:3.15f}'.format(np.rad2deg(wp[i][0][1]))
            goto2_lat = '{:3.15f}'.format(np.rad2deg(wp[i][1][0]))
            goto2_lon = '{:3.15f}'.format(np.rad2deg(wp[i][1][1]))
            xml = template.format(i+1, i+1, goto1_id, goto1_id, goto1_lat, goto1_lon, goto2_id, goto2_id, goto2_lat, goto2_lon, edge_id)
            out_file.write(xml)
        
        # Generate goto maneuvers
        t_file = open('plan_template_goto.xml', 'r')
        template = t_file.read()
        t_file.close()
        for i in range(len(wp)):
            # Blank spaces in the plan:
            # plan number, plan number, Goto 1 id, Goto 1 id, Goto 1 latitude, Goto 1 longitude, 
            goto1_id = generate_random_id(id_list)
            goto1_lat = '{:3.15f}'.format(np.rad2deg(wp[i][2][0]))
            goto1_lon = '{:3.15f}'.format(np.rad2deg(wp[i][2][1]))
            xml = template.format(i+1, i+1, goto1_id, goto1_id, goto1_lat, goto1_lon)
            out_file.write(xml)
        out_file.close()
