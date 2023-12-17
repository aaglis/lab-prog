#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetor(int *vetor, int tamanho);
void mostrarVetor(int *vetor, int tamanho);
void menorMaior(int *vetor, int *vMaiorMenor, int tamanho);


int main(int argc, char *argv[]) {
  srand(time(NULL));
  int tamVetor = atoi(argv[1]);
  int menor;
  int *vetor = (int *)malloc(tamVetor * sizeof(int));
  int *maiorMenor = (int *)malloc(2 * sizeof(int));

  gerarVetor(vetor, tamVetor);
  mostrarVetor(vetor, tamVetor);
  menorMaior(vetor, maiorMenor, tamVetor);
  free(vetor);
  free(maiorMenor);

  return 0;
}

void gerarVetor(int *vetor, int tamanho) {
  for(int i = 0; i < tamanho; i++) {
    vetor[i] = rand() % 100;
  }
}

void mostrarVetor(int *vetor, int tamanho) {
  for(int i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }
  puts("");
}

void menorMaior(int *vetor,int *vMaiorMenor, int tamanho) {
  vMaiorMenor[1] = vetor[0];
  vMaiorMenor[0] = vetor[0];
  for(int i = 0; i < tamanho; i++) {
    if(vetor[i] < vMaiorMenor[0]) {
      vMaiorMenor[0] = vetor[i];
    }
    if(vetor[i] > vMaiorMenor[1]) {
      vMaiorMenor[1] = vetor[i];
    }
  }

  printf("Maior e menor: %d, %d\n", vMaiorMenor[1], vMaiorMenor[0]);
  printf("Endereços de memória: %p, %p\n", &vMaiorMenor[1], &vMaiorMenor[0]);
  
}