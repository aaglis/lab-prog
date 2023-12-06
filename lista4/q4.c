/*
  observei que o valores amazenados no vetor e seus endereços são amazenados
  de forma que os valores sejam amazenados na memoria sequencialmente, seguindo
  o valor(em bytes) do tipo da variavel escolhida.
*/

#include <stdio.h>
#define TAM 10

void imprimirVetorEndereco(int vetor[]);

int main(void)
{

  int vetor[TAM];

  printf("Vetor de tamanho %d -\n", TAM);

  for (int i = 0; i < TAM; i++)
  {
    printf("Digite o %do valor: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  imprimirVetorEndereco(vetor);

  return 0;
}

void imprimirVetorEndereco(int vetor[TAM])
{
  puts("Seu vetor: ");
  for (int i = 0; i < TAM; i++)
  {

    printf("\t%d\t%p\n", vetor[i], &vetor[i]);
  }
}