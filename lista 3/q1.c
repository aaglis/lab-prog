#include <stdio.h>
#define TAM 15

int main(void)
{

  float vetor[TAM], maior = 0, menor = 0;

  printf("Digite o 1o valor: ");
  scanf("%f", &vetor[0]);

  maior = vetor[0];
  menor = vetor[0];

  for (int i = 1; i < TAM; i++)
  {
    printf("Digite o %d valor: ", i + 1);
    scanf("%f", &vetor[i]);

    if (vetor[i] > maior)
    {
      maior = vetor[i];
    }
    if (vetor[i] < menor)
    {
      menor = vetor[i];
    }
  }

  printf("\n\tMaior valor fornecido: %.2f\n\tMenor valor fornecido: %.2f\n", maior, menor);
  printf("\t%.2f - %.2f = %.2f\n", maior, menor, maior - menor);

  return 0;
}