#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetor(int *vetor, int tamanho);
void mostrarVetor(int *vetor, int tamanho);
void menorElemento(int *vetor, int tamanho);


int main(int argc, char *argv[]) {
  srand(time(NULL));
  int tamVetor = atoi(argv[1]);
  int menor;
  int *vetor = (int *)malloc(tamVetor * sizeof(int));
  
  gerarVetor(vetor, tamVetor);
  mostrarVetor(vetor, tamVetor);
  menorElemento(vetor, tamVetor);
  
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

void menorElemento(int *vetor, int tamanho) {
  int menor = vetor[0];
  for(int i = 0; i < tamanho; i++) {
    if(vetor[i] < menor) {
      menor = vetor[i];
    }
  }
  printf("O menor elemento do vetor é: %d\n", menor);
  printf("Endereço do menor elemento: %p\n", &menor);
}