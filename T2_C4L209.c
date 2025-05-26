#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void intercambiar(int *A, int *B) {
    int temp = *A;
    *A = *B;
    *B = temp;
}

void Bubblesort(int arreglo[], int tamano) {
    for (int i = 0; i < tamano - 1; i++) {
        for (int j = 0; j < tamano - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                intercambiar(&arreglo[j], &arreglo[j + 1]);
            }
        }
    }
}

void Selectionsort(int arreglo[], int tamano) {
    int Min;
    for (int i = 0; i < tamano - 1; i++) {
        Min = i;
        for (int j = i + 1; j < tamano; j++) {
            if (arreglo[j] < arreglo[Min]) {
                Min = j;
            }
        }
        intercambiar(&arreglo[Min], &arreglo[i]);
    }
}

int main() {
    int tamano;
    printf("Ingrese el tamaño del arreglo: ");
    if (scanf("%d", &tamano) != 1 || tamano <= 0) {
        printf("Error: Tamaño inválido.\n");
        return 1;
    }

    int *arregloOriginal = malloc(tamano * sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < tamano; i++) {
        arregloOriginal[i] = rand() % 10000;
    }

    int *copiaBurbuja = malloc(tamano * sizeof(int));
    int *copiaSeleccion = malloc(tamano * sizeof(int));
    memcpy(copiaBurbuja, arregloOriginal, tamano * sizeof(int));
    memcpy(copiaSeleccion, arregloOriginal, tamano * sizeof(int));

    clock_t inicio = clock();
    Bubblesort(copiaBurbuja, tamano);
    double tiempoBurbuja = (double)(clock() - inicio) / CLOCKS_PER_SEC;

    inicio = clock();
    Selectionsort(copiaSeleccion, tamano);
    double tiempoSeleccion = (double)(clock() - inicio) / CLOCKS_PER_SEC;

    free(arregloOriginal);
    free(copiaBurbuja);
    free(copiaSeleccion);

    printf("\nResultados:\n");
    printf("- Bubble Sort:    %f segundos\n", tiempoBurbuja);
    printf("- Selection Sort: %f segundos\n", tiempoSeleccion);

    return 0;
}