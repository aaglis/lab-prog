#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

float calcularRMSE(int *vetorA, int *vetorB, int tamanho);
void gerarVetorAleatorio(int *vetor, int tamanho);
void imprimeVetor(int *vetor, int tamanho);

int main(int argc, char *argv[]) {
  srand(time(NULL));

  int tamanho = atoi(argv[1]);

  int *vetorA = (int *)malloc(tamanho * sizeof(int));
  int *vetorB = (int *)malloc(tamanho * sizeof(int));

  gerarVetorAleatorio(vetorA, tamanho);
  gerarVetorAleatorio(vetorB, tamanho);

  printf("Vetor A:");
  imprimeVetor(vetorA, tamanho);

  printf("Vetor B:");
  imprimeVetor(vetorB, tamanho);

  float rmse = calcularRMSE(vetorA, vetorB, tamanho);
  printf("RMSE: %.2f\n", rmse);

  free(vetorA);
  free(vetorB);

  return 0;
}

float calcularRMSE(int *vetorA, int *vetorB, int tamanho) {
  float somaQuadrados = 0.0;

  for (int i = 0; i < tamanho; i++) {
      float diferenca = vetorA[i] - vetorB[i];
      somaQuadrados += diferenca * diferenca;
  }

  float mse = somaQuadrados / tamanho;
  float rmse = sqrt(mse);

  return rmse;
}

void gerarVetorAleatorio(int *vetor, int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    vetor[i] = rand() % 100;
  }
}

void imprimeVetor(int *vetor, int tamanho) {
  for (int i = 0; i < tamanho; i++) {
      printf("\t%d", vetor[i]);
  }
  puts("");
}