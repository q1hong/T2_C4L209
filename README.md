# Tarea 2
Descripción:

La tarea basa en crear dos algoritmos que ordenen números en un array, y comparar los tiempos en el que lo ordenan para verificar la eficacia de cada uno.

El Bubble sort funciona comparando los vecinos y utilizando la función de intercambiar (swap), para posicionarlos números en orden. Mientras que Selection sort busca el número más pequeño (Min) y lo coloca al principio.

Para medir el rendimiento de ambos algoritmos se utiliza la función clock() para medir el tiempo que cada algoritmo ocupa, y se puede concluir que selection sort es más eficaz en cuanto a número de intercambios, mientras que bubble sort funciona en arreglos de menor tamaño.



Comparación

 Tamaño  Bubble Sort (s)  Selection Sort (s) 
 10      0.000003         0.000002           
 100     0.000021         0.000012           
 1000    0.001765         0.000876           
 10000   0.203491         0.098324           

