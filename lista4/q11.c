#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetor(int *vetor, int tamVetor, int tamIntervalo);
void mostrarVetor(int *vetor, int tamVetor);
void calcularOcorrencias(int *vetorX, int *vetorY, int tamVetor, int tamIntervalo, int matriz[tamIntervalo][tamIntervalo]);
void mostrarMatriz(int tamIntervalo, int matriz[tamIntervalo][tamIntervalo]); 

int main(void) {
  int tamVetor, tamIntervalo;
  int *vetorX, *vetorY;

  printf("Digite o tamanho das matrizes: ");
  scanf("%d", &tamVetor);

  printf("Digite o tamanho do intervalo: ");
  scanf("%d", &tamIntervalo);

  int matriz[tamIntervalo][tamIntervalo];

  vetorX = (int *) malloc(tamVetor * sizeof(int));
  vetorY = (int *) malloc(tamVetor * sizeof(int));

  gerarVetor(vetorX, tamVetor, tamIntervalo);
  gerarVetor(vetorY, tamVetor, tamIntervalo);
  
  mostrarVetor(vetorX, tamVetor);
  mostrarVetor(vetorY, tamVetor);

  calcularOcorrencias(vetorX, vetorY, tamVetor, tamIntervalo, matriz);
  mostrarMatriz(tamIntervalo, matriz);

  return 0;
}

void gerarVetor(int *vetor, int tamVetor, int tamIntervalo) {
  srand(time(NULL));

  for(int i = 0; i < tamVetor; i++) {
    vetor[i] = rand() % tamIntervalo;
  }
}

void mostrarVetor(int *vetor, int tamVetor) {
  puts("Seu vetor:");
  for(int i = 0; i < tamVetor; i++) {
    printf("\t%d", vetor[i]);
  }
  puts("");
}

void calcularOcorrencias(int *vetorX, int *vetorY, int tamVetor, int tamIntervalo, int matriz[tamIntervalo][tamIntervalo]) {
  int contador;
  for(int i = 0; i < tamIntervalo; i++) {
    for(int k = 0; k < tamIntervalo; k++) {
      for(int l = 0; l < tamVetor; l++) {
      contador = 0;
        for(int m = 0; m < tamVetor; m++) {
          if(vetorX[l] == l && vetorY[m] == k){
            contador++;
          }
        }
      }
    matriz[i][k] = contador;
    }
  }
}
void mostrarMatriz(int tamIntervalo, int matriz[tamIntervalo][tamIntervalo]) {
  puts("Sua matriz: ");

  for(int i = 0; i < tamIntervalo; i++) {
    for(int k = 0; k < tamIntervalo; k++) {
      printf("\t %d", matriz[i][k]);
    }
    puts("");
  }


}