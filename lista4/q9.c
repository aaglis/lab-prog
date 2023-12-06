#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void escreverVetor(int *ponteiroVetor);
void mostrarVetor (int *ponteiroVetor);
void ordenarVetor (int *ponteiroVetor);

int main(void) {

  int *pVetor;
  pVetor = malloc(TAM * sizeof(int));

  escreverVetor(pVetor);
  ordenarVetor(pVetor);
  mostrarVetor(pVetor);

  return 0;
}

void escreverVetor(int *ponteiroVetor) {
  int numeroDigitado;
  for(int i = 0; i < TAM; i++){
    printf("Digite o %do elemento do vetor: ", i + 1);
    scanf("%d", &numeroDigitado);
    ponteiroVetor[i] = numeroDigitado;
  }
  puts("");
}

void mostrarVetor (int *ponteiroVetor) {
  puts("seu vetor digitado (ordenado):");
  for(int i = 0; i < TAM; i++) {
    printf("\t%d", ponteiroVetor[i]);
  } 
  puts("");
}

void ordenarVetor (int *ponteiroVetor) {
  int i, j, troca;

  do {
    i = 0;
    for(j = 0; j < TAM - i - 1; j++) {
      if (ponteiroVetor[j] > ponteiroVetor[j + 1]) {
        troca = ponteiroVetor[j];
        ponteiroVetor[j] = ponteiroVetor[j + 1];
        ponteiroVetor[j + 1] = troca;
        i = 1;
      }
    }
  } while(i);
}