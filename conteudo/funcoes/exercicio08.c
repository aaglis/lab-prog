// organize um vetor em ordem crescente com funções
#include <stdio.h>

void organizarVetor(int vetor[], int tamanho);

int main(void)
{
  int tamanho = 5;
  int vetor[tamanho], i;

  for (i = 0; i < tamanho; i++)
  {
    printf("Digite o %d numero: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  organizarVetor(vetor, tamanho);

  puts("Seu vetor, em ordem crescente:");

  for (i = 0; i < tamanho; i++)
  {
    printf("%d\n", vetor[i]);
  }

  return 0;
}

void organizarVetor(int vetor[], int tamanho)
{
  int i, k, troca;

  for (i = 0; i < tamanho; i++)
  {

    for (k = i + 1; k < tamanho; k++)
    {

      if (vetor[i] > vetor[k])
      {
        troca = vetor[k];
        vetor[k] = vetor[i];
        vetor[i] = troca;
      }
    }
  }
}