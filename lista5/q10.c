#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM_VETOR 10
void gerarVetorAleatorio(int *vetor, int maxValor);
void imprimirVetor(int *vetor, int tamanho);
void gerarMatrizOcorrencias(int *vetor1, int *vetor2, int tamanho, int **matriz);
void imprimirMatriz(int **matriz, int tamanho);

int main(int argc, char *argv[]) {
    srand(time(NULL));

    int n = atoi(argv[1]);
    int maxValor = atoi(argv[2]);

    int *vetor1 = (int *)malloc(TAM_VETOR * sizeof(int));
    int *vetor2 = (int *)malloc(TAM_VETOR * sizeof(int));

    int **matriz = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matriz[i] = (int *)malloc(n * sizeof(int));
    }

    gerarVetorAleatorio(vetor1, maxValor);
    gerarVetorAleatorio(vetor2, maxValor);

    printf("Primeiro vetor:\n");
    imprimirVetor(vetor1, n);

    printf("Segundo vetor:\n");
    imprimirVetor(vetor2, n);

    printf("Coorrências:\n");
    gerarMatrizOcorrencias(vetor1, vetor2, n, matriz);
    imprimirMatriz(matriz, n);

    return 0;
}

void gerarVetorAleatorio(int *vetor, int maxValor) {
  for (int i = 0; i < TAM_VETOR; i++) {
    vetor[i] = rand() % (maxValor + 1);
  }
}

void imprimirVetor(int *vetor, int tamanho) {
  for (int i = 0; i < TAM_VETOR; i++) {
    printf("%d ", vetor[i]);
  }
  puts("");
}

void gerarMatrizOcorrencias(int *vetor1, int *vetor2, int tamanho, int **matriz) {
  for (int i = 0; i < tamanho; i++) {
    for (int j = 0; j < tamanho; j++) {
      int ocorrencias = 0;

      for (int k = 0; k < tamanho; k++) {
        if (vetor1[i] == vetor2[j] && vetor1[i] == vetor1[k] && vetor2[j] == vetor2[k]) {
          ocorrencias++;
        }
      }

    matriz[i][j] = ocorrencias;
    }
  }
}

void imprimirMatriz(int **matriz, int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    for (int j = 0; j < tamanho; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}