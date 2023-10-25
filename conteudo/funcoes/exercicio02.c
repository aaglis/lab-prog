#include <stdio.h>

void primeiraForma(int vetor[], int posicao);

int main(void) {

  int vetorNumeros[5] = {1, 5, 7, 4, 9 };

  primeiraForma(vetorNumeros, 5);

  return 0;
}

void primeiraForma(int vetor[], int posicao) {
  int i;
  for(i = 0; i < posicao; i++) {
    printf("%d ", vetor[i]);
  }
}