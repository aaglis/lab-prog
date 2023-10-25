/*
  receber 10 valores e tambem um valor referencia e mostrar:
  1 - os numeros maiores que o valor referencia
  2 - a qntd de numeros menores ao valor referencia
  3 - a qntd de numeros iguais ao valor referencia
*/
#include <stdio.h>
#define TAM 5

int main(void)
{

  int vetor[TAM], i, referencia;
  int contadorMenor = 0;
  int contadorAparece = 0;

  for (i = 0; i < TAM; i++)
  {
    printf("Digite o %d numero: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  puts("Agora, digite o valor referencia: ");
  scanf("%d", &referencia);

  //verificação de numeros menores e valores iguais ao valor referencia
  for (i = 0; i < TAM; i++)
  {
    if (vetor[i] < referencia)
    {
      contadorMenor++;
    }
    if (vetor[i] == referencia)
    {
      contadorAparece++;
    }
  }
  // valores maiores que a referência.
  puts("valores maiores que o valor referencia:");
  for (i = 0; i < TAM; i++)
  {
    if (vetor[i] > referencia)
    {
      printf("%d\t", vetor[i]);
    }
    else {
      puts("Nao existem numeros maiores que o valor referencia.");
    }
  }

  // qntd de numeros menores que a referencia
  printf("\nQntd de numeros menores que a referencia: %d\n", contadorMenor);

  // qntd de vezes que o valor referencia aparece no vetor
  printf("Qntd de vezes que o valor referencia aparece: %d\n", contadorAparece);
  return 0;
}