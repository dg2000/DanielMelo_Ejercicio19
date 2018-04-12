segunda: rumge_segundo_orden.png rumge_primer_orden.png

rumge_segundo_orden.png: DanielMelo_Grafica2.py segundo_orden.txt
	python DanielMelo_Grafica2.py
	rm segundo_orden.txt

segundo_orden.txt: orden2
	./orden2 > segundo_orden.txt

orden2: RumgeKutta_Orden2.cpp
	c++ RumgeKutta_Orden2.cpp -o orden2




primera: rumge_primer_orden.png

rumge_primer_orden.png: DanielMelo_Grafica.py primer_orden.txt
	python DanielMelo_Grafica.py
	rm primer_orden.txt

primer_orden.txt: orden1
	./orden1 > primer_orden.txt

orden1: RumgeKutta_Orden1.cpp
	c++ RumgeKutta_Orden1.cpp -o orden1
