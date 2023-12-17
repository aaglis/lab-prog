#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para alocar memória para a matriz
void alocarMatriz(int ***matriz, int tamanho) {
    *matriz = (int **)malloc(tamanho * sizeof(int *));

    if (*matriz == NULL) {
        fprintf(stderr, "Falha na alocação de memória para as tamanho da matriz.\n");
        exit(1);
    }

    for (int i = 0; i < tamanho; i++) {
        (*matriz)[i] = (int *)malloc(tamanho * sizeof(int));

        if ((*matriz)[i] == NULL) {
            fprintf(stderr, "Falha na alocação de memória para a linha %d.\n", i);
            exit(1);
        }
    }
}

// Função para preencher a matriz com números aleatórios entre 0 e 100
void preencherMatrizAleatoria(int **matriz, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            matriz[i][j] = rand() % 101; // Gera números aleatórios entre 0 e 100
        }
    }
}

// Função para imprimir a matriz
void imprimirMatriz(int **matriz, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("\t%d", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função para liberar memória alocada para a matriz
void liberarMatriz(int **matriz, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

void somatorioDiagonal(int **matriz, int tamanho, int *somatorio) {
    *somatorio = 0;
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        *somatorio += matriz[i][i];
        contador++;
    }
}

int main(int argc, char *argv[]) {
    srand(time(NULL));

    int n = atoi(argv[1]);
    int somatorio;

  
    int **matriz;
  
    alocarMatriz(&matriz, n);
    preencherMatrizAleatoria(matriz, n);
    imprimirMatriz(matriz, n);

    somatorioDiagonal(matriz, n, &somatorio);
    printf("Somatório da diagonal principal:\n\t%d\n", somatorio);

    liberarMatriz(matriz, n);

    return 0;
}
