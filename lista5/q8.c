#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarMatriz(int **matriz, int linhas, int colunas);
void binarizarMatriz(int **matriz, int **matrizBinarizada, int linhas, int colunas, int limiar);
void imprimirMatriz(int **matriz, int linhas, int colunas);

int main() {
  srand(time(NULL));

  int linhas, colunas, limiar;

  printf("Digite o número de linhas da matriz: ");
  scanf("%d", &linhas);

  printf("Digite o número de colunas da matriz: ");
  scanf("%d", &colunas);

  printf("Digite o limiar: ");
  scanf("%d", &limiar);

  int **matriz = (int **)malloc(linhas * sizeof(int *));
  int **matrizBinarizada = (int **)malloc(linhas * sizeof(int *));

  for (int i = 0; i < linhas; i++) {
    matriz[i] = (int *)malloc(colunas * sizeof(int));
    matrizBinarizada[i] = (int *)malloc(colunas * sizeof(int));
  }

  gerarMatriz(matriz, linhas, colunas);
  binarizarMatriz(matriz, matrizBinarizada, linhas, colunas, limiar);

  printf("Matriz Original:\n");
  imprimirMatriz(matriz, linhas, colunas);

  printf("\nMatriz Binarizada (com limiar %d):\n", limiar);
  imprimirMatriz(matrizBinarizada, linhas, colunas);

  for (int i = 0; i < linhas; i++) {
    free(matriz[i]);
    free(matrizBinarizada[i]);
    }

  free(matriz);
  free(matrizBinarizada);

  return 0;
}

void gerarMatriz(int **matriz, int linhas, int colunas) {
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      matriz[i][j] = rand() % 100;
    }
  }
}

void binarizarMatriz(int **matriz, int **matrizBinarizada, int linhas, int colunas, int limiar) {
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      matrizBinarizada[i][j] = (matriz[i][j] > limiar) ? 1 : 0;
    }
  }
}

void imprimirMatriz(int **matriz, int linhas, int colunas) {
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}