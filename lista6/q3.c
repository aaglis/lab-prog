#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct InfoVetor {
    int *ponteiroVetor;
    int quantidadeElementos;
    float media;
};

void gerarVetor(int *vetor, int tamanho);
float media(int *vetor, int tamanho);

int main() {
  srand(time(NULL));

  struct InfoVetor info;

  printf("Digite a quantidade de elementos no vetor: ");
  scanf("%d", &info.quantidadeElementos);

  info.ponteiroVetor = (int *)malloc(info.quantidadeElementos * sizeof(int));

  gerarVetor(info.ponteiroVetor, info.quantidadeElementos);

  info.media = media(info.ponteiroVetor, info.quantidadeElementos);

  printf("Vetor gerado:\n");
  for (int i = 0; i < info.quantidadeElementos; i++) {
    printf("%d ", info.ponteiroVetor[i]);
  }
  printf("\n");

  printf("Média do vetor: %.2f\n", info.media);


  return 0;
}

void gerarVetor(int *vetor, int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    vetor[i] = rand() % 100;
  }
}

float media(int *vetor, int tamanho) {
  int soma = 0;

  for(int i = 0; i < tamanho; i++) {
    soma += vetor[i];
  }

  return (float)soma / tamanho;
}