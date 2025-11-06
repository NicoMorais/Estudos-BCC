#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void imprimirArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void preencherVetor(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // gera números aleatórios de 0 a 99
    }

}

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
		imprimirArray(arr, n); // Imprime o array após cada inserção
    }
}


int main() {
    srand(time(NULL)); // inicializa a seed para gerar valores diferentes a cada execução

    int n = 5;
    int numeros[5];

    preencherVetor(numeros, n);

    //imprimirArray(numeros, n);

    insertionSort(numeros, n);

    return 0;
}
