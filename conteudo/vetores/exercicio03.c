/*
  receba 5 notas, faça a média, e mostre quem está na média,
  acima da média ou abaixo da média
*/

#include <stdio.h>

int main(void)
{

  float vetor[5], somatorio, media;
  int i;

  for (i = 0; i < 5; i++)
  {
    printf("Digite a %d nota: ", i + 1);
    scanf("%f", &vetor[i]);

    somatorio += vetor[i];
  }

  media = somatorio / 5;

  printf("a media da turma foi: %.2f\n\n", media);

  for (i = 0; i < 5; i++)
  {
    if(vetor[i] == media) {
      printf("%.2f esta na media %.2f\n", vetor[i], media);
    }

    if (vetor[i] < media)
    {
      printf("%.2f esta abaixo da media %.2f\n", vetor[i], media);
    }
    else
    {
      printf("%.2f esta acima da media %.2f\n", vetor[i], media);
    }
  }

  return 0;
}