#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetor(int *vetorX, int tamVetor, int tamIntervalo);
void imprimirVetor(int *vetorX, int tamVetor);
void calcularOcorrencias(int *vetorX, int *vetorY, int tamVetor, int tamIntervalo);
void imprimirOcorrencias(int *vetorY, int tamIntervalo);

int main(void) {

  int tamVetor, tamIntervalo, *vetorX, *vetorY;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamVetor);

  printf("Digite o tamanho do intervalo: ");
  scanf("%d", &tamIntervalo);

  vetorX = (int *) malloc(tamVetor * sizeof(int));
  vetorY = (int *) malloc(tamIntervalo * sizeof(int));

  gerarVetor(vetorX, tamVetor, tamIntervalo);
  calcularOcorrencias(vetorX, vetorY, tamVetor, tamIntervalo);
  imprimirVetor(vetorX, tamVetor);
  imprimirOcorrencias(vetorY, tamIntervalo);

  return 0;
}


void gerarVetor(int *vetorX, int tamVetor, int tamIntervalo) {
  srand(time(NULL));

  for(int i = 0; i < tamVetor; i++) {
    vetorX[i] = rand() % tamIntervalo;
  }
}

void imprimirVetor(int *vetorX, int tamVetor) {
  puts("");
  puts("Seu vetor: ");

  for (int i = 0; i < tamVetor; i ++) {
    printf("\t%d ", vetorX[i]);
  }
  puts("");
}

void calcularOcorrencias(int *vetorX, int *vetorY, int tamVetor, int tamIntervalo) {
  int contador;

  for(int k = 0; k < tamIntervalo; k++) {
    contador = 0;
    for(int i = 0; i < tamVetor; i++) {
      if(vetorX[i] == k) {
        contador++;
      }
      vetorY[k] = contador;
    }
  }
}

void imprimirOcorrencias(int *vetorY, int tamIntervalo){
  puts("Vetor de ocorrencias: ");
  for(int i = 0; i < tamIntervalo; i++) {
    printf("\t%d ", vetorY[i]);
  }
  puts("");
}