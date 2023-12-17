#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define INTERVALO 100

void criarVetor(float *vetor, int tamVetor);
void imprimirVetor(float *vetor, int tamVetor);
void somatorioVetor(float *vetor, int tamVetor, float somatorio);


int main(int argc, char *argv[]) {

  int tamVetor = atoi(argv[1]);
  float somatorio;

  float *vetor = (float *)malloc(tamVetor * sizeof(float));

  criarVetor(vetor, tamVetor);
  imprimirVetor(vetor, tamVetor);
  somatorioVetor(vetor, tamVetor, somatorio);
  
}

void criarVetor(float *vetor, int tamVetor) {
  for(int i = 0; i < tamVetor; i++){
    vetor[i] = ((float)rand() / RAND_MAX) * 100.0;
  }
}


void imprimirVetor(float *vetor, int tamVetor) {
  for(int i = 0; i < tamVetor; i++){
    printf("\t%.2f ", vetor[i]);
  }
  puts("");
}

void somatorioVetor(float *vetor, int tamVetor, float somatorio) {
  for(int i = 0; i < tamVetor; i++){
    somatorio += vetor[i];
  }

  printf("Somatorio:\n\t%.2f\n", somatorio);
}