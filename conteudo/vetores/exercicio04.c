/*
  receba 10 numeros do usuario, armazene em um vetor e
  retorne o vetor na forma inversa
*/
#include <stdio.h>
#define TAM 10
int main(void)
{

  float vetor[TAM];
  int i;

  for (i = 0; i < TAM; i++)
  {
    printf("Digite o %d numero do vetor:", i + 1);
    scanf("%f", &vetor[i]);
  }

  puts("Vetor apresentado na forma inversa:\n");
  for (i = TAM - 1; i > 0; i--)
  {

    printf("Posicao %d - %.2f\n", i, vetor[i]);
  }

  puts("Fim.");

      return 0;
}