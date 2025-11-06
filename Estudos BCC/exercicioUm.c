//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <time.h>
//
//void preencherVetor(int arr[], int n) {
//    for (int i = 0; i < n; i++) {
//        arr[i] = rand() % 1001; // gera números aleatórios de 0 a 99
//    }
//
//}
//
//void swap(int* a, int* b){
//    int aux = *a;
//    *a = *b;
//    *b = aux;
//}
//
//void imprimirArray(int arr[], int n) {
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//void bubbleSort(int arr[], int n) {
//    int temp;
//	bool swapped;
//    for (int i = 0; i < n - 1; i++) {
//        swapped = false;
//        for (int j = 0; j < n - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//				swap(&arr[j], &arr[j + 1]);
//				swapped = true;
//				imprimirArray(arr, n); // Imprime o array após cada troca
//            }
//        }
//        if (!swapped) {
//            break; // O array já está ordenado
//		}
//    }
//}
//
//int main() {
//    srand(time(NULL)); // inicializa a seed para gerar valores diferentes a cada execução
//
//    int n = 10;
//    int numeros[10];
//
//	preencherVetor(numeros, n);
//
//	imprimirArray(numeros, n);
//
//	bubbleSort(numeros, n);
//
//    return 0;
//}
