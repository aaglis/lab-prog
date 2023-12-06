#include <stdio.h>

int main(void)
{

  int numeroDigitado, menorNum;
  int *pNumDigitado, *pMenorNum;

  pMenorNum = &menorNum;
  pNumDigitado = &numeroDigitado;

  printf("Digite um numero inteiro: ");
  scanf("%d", pNumDigitado);

  *pMenorNum = *pNumDigitado;

  for (;;)
  {

    printf("\tMenor numero digitado: %d\n", *pMenorNum);

    printf("Digite outro valor inteiro (Digite -1 para encerrar): ");
    scanf("%d", pNumDigitado);

    if (*pNumDigitado == -1)
    {
      puts("Programa encerrado.");
      break;
    }

    if (*pMenorNum > *pNumDigitado)
    {

      *pMenorNum = *pNumDigitado;
    }
  }

  return 0;
}