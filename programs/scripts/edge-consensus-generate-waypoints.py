from imcpy.coordinates import WGS84
import numpy as np

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

def generate_waypoints(lat0, lon0, offset):
    return [WGS84.displace(lat0, lon0, o[0], o[1]) for o in offset]

def print_coordinate(c, end='\n'):
    Ndeg, Nmin = radian_to_minute_degree(c[0])
    if Ndeg >= 0.:
        Nstr = "{:3.0f}N{:2.9}".format(Ndeg, Nmin)
    else:
        Nstr = "{:3.0f}S{:2.9}".format(-Ndeg, np.abs(Nmin))

    Edeg, Emin = radian_to_minute_degree(c[1])
    if Edeg >= 0.:
        Estr = "{:3.0f}E{:2.9}".format(Edeg, Emin)
    else:
        Estr = "{:3.0f}W{:2.9}".format(-Edeg, np.abs(Emin))
    
    print("({}, {})".format(Nstr, Estr), end=end)

if __name__ == "__main__":
    offset = [(0.,0.), (-25.,0.), (-15.,10.), (-15.,-20.), (-40.,10.), (-40.,-20.)]
    lat0 = degree_minute_to_radian(41., 11.135229)
    lon0 = degree_minute_to_radian(-8., -42.354545)

    wp = generate_waypoints(lat0, lon0, offset)
    print("Generated waypoints:")
    for w in wp:
        print_coordinate(w)
