import numpy as np

import matplotlib.pyplot as plt


x = np.loadtxt("primer_orden.txt")[:, 0]

y = np.loadtxt("primer_orden.txt")[:, 1]

x2 = np.linspace(0.0, 3.0)

#plt.scatter(x, y, label = "c++")

plt.plot(x, 100.0*abs( np.exp(-x) - y )*np.exp(x) , label = "Error porcentual")
plt.ylabel("Error porcentual")
plt.xlabel("Puntos evaluados")
plt.legend()

plt.savefig("rumge_primer_orden.png")
    

