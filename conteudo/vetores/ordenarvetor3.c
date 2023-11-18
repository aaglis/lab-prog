#include <stdio.h>

int main() {
  int arr[] = {64, 25, 12, 22, 11};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Algoritmo de Ordenação por Seleção
  for (int i = 0; i < n - 1; i++) {
    int minIndex = i;

        // Encontrar o índice do menor elemento na parte não ordenada
    for (int j = i + 1; j < n; j++) {
        if (arr[j] < arr[minIndex]) {
          minIndex = j;
        }
    }

        // Trocar o menor elemento com o primeiro elemento não ordenado
    int temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
  }

    // Imprimir o vetor ordenado
  printf("Vetor ordenado: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
