import numpy as np

import matplotlib.pyplot as plt


x = np.loadtxt("segundo_orden.txt")[:, 0]

y = np.loadtxt("segundo_orden.txt")[:, 1]

z = np.loadtxt("segundo_orden.txt")[:, 2]

x2 = np.linspace(0.0, 10.0)

#plt.scatter(x, y, label = "c++")

plt.plot(x, abs( np.cos(x) - y ) , label = "Error fraccional")
#plt.plot(x, y)

#plt.plot(z, y)
plt.ylabel("Error porcentual")
plt.xlabel("Puntos evaluados")
plt.legend()

plt.savefig("rumge_segundo_orden.png")
    
