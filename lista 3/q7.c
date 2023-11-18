#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM 3

int main(void)
{

  srand(time(NULL));

  int vetor[TAM], somatorioArit = 0, somatorioGeo = 1;
  float mediaArit, mediaGeo;

  for (int i = 0; i < 3; i++)
  {
    vetor[i] = rand() % 20; // random number entre 0 e 19
    printf("\t%do numero: %d\n", i + 1, vetor[i]);
    somatorioArit += vetor[i];
    somatorioGeo *= vetor[i];
  }

  mediaArit = (float)somatorioArit / TAM;
  mediaGeo = pow(somatorioGeo, 1.0 / (float)TAM);

  printf("%d\n", somatorioGeo);

  printf("Media aritimetica: %.2f\n", mediaArit);
  printf("Media geometrica: %.2f\n", mediaGeo);

  return 0;
}