#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetor(int *vetor, int tamanho);
void imprimeVetor(int *vetor, int tamanho);
void media(int *vetor, int tamanho, float *media);
void ordenarVetor(int *vetor, int tamanho);
void mediana(int *vetor, int tamanho, float *mediana);
void moda(int *vetor, int tamanho, int *moda, int *contador);

int main(int argc, char *argv[]) {
  srand(time(NULL));
  float resultadoMedia, resultadoMediana;
  int resultadoModa, contadorModa;
  int tamVetor = atoi(argv[1]);
  int *vetor = (int *)malloc(tamVetor * sizeof(int));

  gerarVetor(vetor, tamVetor);
  ordenarVetor(vetor, tamVetor);
  imprimeVetor(vetor, tamVetor);
  media(vetor, tamVetor, &resultadoMedia);
  mediana(vetor, tamVetor, &resultadoMediana);
  moda(vetor, tamVetor, &resultadoModa, &contadorModa);
  
  printf("media:\n\t%.2f\n", resultadoMedia);
  printf("mediana:\n\t%.2f\n", resultadoMediana);
  printf("A moda é:\n\t%d\nfrequência:\n\t%d\n", resultadoModa, contadorModa);
  
  return 0;
}

void gerarVetor(int *vetor, int tamanho) {
  for(int i = 0; i < tamanho; i++) {
    vetor[i] = rand() % 100;
  }
}

void imprimeVetor(int *vetor, int tamanho) {
  for(int i = 0; i < tamanho; i++) {
    printf("\t%d", vetor[i]);
  }
  puts("");
}

void media(int *vetor, int tamanho, float *media) {
  int somatorio = 0;
  for(int i = 0; i < tamanho; i++) {
    somatorio += vetor[i];
  }

  *media = (float)somatorio / tamanho;
}
void ordenarVetor(int *vetor, int tamanho) {
  int aux;
  for(int i = 0; i < tamanho; i++) {
    for(int j = 0; j < tamanho; j++) {
      if(vetor[i] < vetor[j]) {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }
}

void mediana(int *vetor, int tamanho, float *mediana) {
  int aux = tamanho / 2;
  if(tamanho % 2 == 0) {
    *mediana = (vetor[aux] + vetor[aux - 1]) / 2.0;
  }
  else {
    *mediana = vetor[aux];
  }
}

void moda(int *vetor, int tamanho, int *moda, int *contador) {
  int modaAtual = vetor[0];
  int frequenciaAtual = 1;

  int modaFinal = modaAtual;
  int frequenciaFinal = frequenciaAtual;

  for (int i = 1; i < tamanho; i++) {
    if (vetor[i] == vetor[i - 1]) {
      frequenciaAtual++;
    } 
    else {
      if (frequenciaAtual > frequenciaFinal) {
        modaFinal = modaAtual;
        frequenciaFinal = frequenciaAtual;
      }
      modaAtual = vetor[i];
      frequenciaAtual = 1;
    }
  }
    
  if (frequenciaAtual > frequenciaFinal) {
    modaFinal = modaAtual;
  }
  *moda = modaFinal;
  *contador = frequenciaFinal;
}

