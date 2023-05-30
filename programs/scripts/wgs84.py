import numpy as np

## Constants
# Semi-major axis.
c_wgs84_a = 6378137.0
# Semi-minor axis.
c_wgs84_b = 6356752.3142
# First eccentricity squared.
c_wgs84_e2 = 0.00669437999013
# Second (prime) eccentricity squared.
c_wgs84_ep2 = 0.00673949674228
# Flattening.
c_wgs84_f = 0.0033528106647475

def computeRn(lat):
    '''Calculates Earth radius for a given latitude'''
    lat_sin = np.sin(lat)
    R = c_wgs84_a / np.sqrt(1 - c_wgs84_e2 * (lat_sin * lat_sin))
    return R

def wgs2ecef(lat, lon, hae):
    '''Converts WGS84 to Earth-centered-Earth-fixed coordinates'''
    cos_lat = np.cos(lat)
    sin_lat = np.sin(lat)
    cos_lon = np.cos(lon)
    sin_lon = np.sin(lon)
    rn = computeRn(lat)

    x = (rn + hae) * cos_lat * cos_lon
    y = (rn + hae) * cos_lat * sin_lon
    z = (((1.0 - c_wgs84_e2) * rn) + hae) * sin_lat   

    return x, y, z

def ecef2wgs(x, y, z):
    '''Converts Earth-centered-Earth-fixed to WGS84 coordinates'''
    p = np.sqrt(x * x + y * y)
    lon = np.arctan2(y, x)
    theta = np.arctan2(c_wgs84_a * z, p * c_wgs84_b)
    num = z + c_wgs84_ep2 * c_wgs84_b * (np.sin(theta)**3)
    den = p - c_wgs84_e2 * c_wgs84_a * (np.cos(theta)**3)
    lat = np.arctan2(num, den)
    hae = p / np.cos(lat) - computeRn(lat)   

    return lat, lon, hae

def displace(n, e, d, lat0, lon0, hae0):
    '''Displaces the WGS84 coordinates by a given distance in NED frame'''
    # Convert reference to ECEF coordinates
    x0, y0, z0 = wgs2ecef(lat0, lon0, hae0)

    # Compute Geocentric latitude
    p = np.sqrt(x0 * x0 + y0 * y0)
    # Use elliptical coordinates
    N = computeRn(lat0)
    phi = np.arctan2(z0, p * (1 - c_wgs84_e2 * N / (N + hae0)))

    # Compute all needed sine and cosine terms for conversion.
    slon = np.sin(lon0)
    clon = np.cos(lon0)
    sphi = np.sin(phi)
    cphi = np.cos(phi)

    # Obtain ECEF coordinates of displaced point
    # Note: some signs from standard ENU formula
    # are inverted - we are working with NED (= END) coordinates
    x = x0 - slon * e - clon * sphi * n - clon * cphi * d
    y = y0 + clon * e - slon * sphi * n - slon * cphi * d
    z = z0 + cphi * n - sphi * d

    # Convert back to WGS-84 coordinates.
    return ecef2wgs(x, y, z)

def displacement(lat0, lon0, hae0, lat, lon, hae):
    '''Calculates the NED displacement between two WGS84 coordinates'''
    x0, y0, z0 = wgs2ecef(lat0, lon0, hae0)
    x, y, z = wgs2ecef(lat, lon, hae)

    ox = x - x0
    oy = y - y0
    oz = z - z0
    slat = np.sin(lat0)
    clat = np.cos(lat0)
    slon = np.sin(lon0)
    clon = np.cos(lon0)

    n = -slat * clon * ox - slat * slon * oy + clat * oz
    e = -slon * ox + clon * oy
    d = -clat * clon * ox - clat * slon * oy - slat * oz

    return n, e, d
   
