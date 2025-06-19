#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binario(int num, int v[], int i, int d) {
    int m = (i + d) / 2, c;
    if (m == i) {
        c = 0;
    } else {
        if (num == v[m]) {
            c = 1;
        } else if (v[m] < num) {
            c = binario(num, v, m, d);
        } else if (v[m] > num) {
            c = binario(num, v, i, m);
        }
    }
    return c;
}

int main() {
    int n = 1000000;  
    int *arr = malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    int num_buscar = n / 2;  

    printf("Buscando el numero %d en un arreglo de %d enteros\n", num_buscar, n);

    int encontrado = binario(num_buscar, arr, 0, n);

    if (encontrado) {
        printf("Elemento encontrado!\n");
    } else {
        printf("Elemento no encontrado!\n");
    }

    free(arr);
    return 0;
}