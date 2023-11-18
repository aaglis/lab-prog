//ordenação por inserção

#include <stdio.h>

int main() {
  int arr[] = {64, 25, 12, 22, 11};
  int n = sizeof(arr) / sizeof(arr[0]);

  for (int i = 1; i < n; i++) {
    int chave = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > chave) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = chave;
  }
  printf("Vetor ordenado: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
