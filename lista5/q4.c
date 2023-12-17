#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define INTERVALO 100

void criarVetor (int *vetor, int tamanho);

void mostrarVetor(int *vetor, int tamanho);
void acharMenorMaior(int *vetor, int *vetorMaiorMenor, int tamanho);
void normalizacaoDados(int *vetor, int *vetorMaiorMenor, int tamanho);

int main(int argc, char *argv[]) {
  srand(time(NULL));
  
  int tamVetor = atoi(argv[1]);

  int *vetor = (int *)malloc(tamVetor * sizeof(int));
  int *maiorMenor = (int *)malloc(2 * sizeof(int));

  criarVetor(vetor, tamVetor);
  mostrarVetor(vetor, tamVetor);
  acharMenorMaior(vetor, maiorMenor, tamVetor);
  normalizacaoDados(vetor, maiorMenor, tamVetor);
  puts("Vetor normalizado:");
  mostrarVetor(vetor, tamVetor);

  return 0;
}

void criarVetor (int *vetor, int tamanho) {
  for(int i = 0; i < tamanho; i++) {
    vetor[i] = rand() % INTERVALO;
  }
}

void mostrarVetor(int *vetor, int tamanho) {
  for(int i = 0; i < tamanho; i++) {
    printf("\t%d", vetor[i]);
  }
  puts("");
}

void acharMenorMaior(int *vetor, int *vetorMaiorMenor, int tamanho) {
  vetorMaiorMenor[0] = vetor[0];
  vetorMaiorMenor[1] = vetor[0];

  for(int i = 0; i < tamanho; i++) {
    if(vetor[i] > vetorMaiorMenor[1]) {
      vetorMaiorMenor[1] = vetor[i];
    }
    if(vetor[i] < vetorMaiorMenor[0]) {
      vetorMaiorMenor[0] = vetor[i];
    }
  }
  printf("Maior e menor:\n\t%d e %d\n", vetorMaiorMenor[0], vetorMaiorMenor[1]);
}

void normalizacaoDados(int *vetor, int *vetorMaiorMenor, int tamanho) {
  for(int i = 0; i < tamanho; i++) {
    vetor[i] = (vetor[i] - vetorMaiorMenor[0]) / (float) (vetorMaiorMenor[1] - vetorMaiorMenor[0]);
  }
}