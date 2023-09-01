#include <stdio.h>

int main(void)
{

  int numeroDigitado;

  printf("Digite um numero: ");
  scanf("%d", &numeroDigitado);

  !(numeroDigitado % 2) ? printf("ele e par!\n") : printf("ele e impar!\n"); //operador ternário

      // if (!(numeroDigitado % 2))
      // {
      //   printf("voce digitou o numero %d, e ele e par!\n", numeroDigitado);
      // }
      // else
      // {
      //   printf("voce digitou o numero %d, e ele e impar!\n", numeroDigitado);
      // }

      return 0;
}