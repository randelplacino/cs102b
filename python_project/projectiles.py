import math
import numpy as np
import matplotlib.pylab as plt

v = float(input("Initial velocity (m/s): "))
print("The initial velocity has been set to ", v, " m/s")
print("")
print(np.pi)

theta = float(input("Initial angle (degrees): "))
theta = round((theta)*(math.pi)*(0.00555555555), 3)
print("The initial angle is ", theta, " radians") 
print("")

h = float(input("Initial height (m): "))
print("The initial height has been set to ", h, " m")
print("")

ft = (v*np.sin(theta)+np.sqrt(np.square(v*np.sin(theta))+2.0*9.8 *h))/(9.8)
t = np.arange(0,ft)

def y(t):
    return (h)+(((t))*(v)*np.sin(theta))-((.5)*(9.8)*(t**2))

plt.plot(t,y(t))
plt.grid()
plt.show()
