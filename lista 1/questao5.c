#include <stdio.h>

int main(void)
{

  float numeroDigitado, valorTotal;

  printf("Digite um valor da conta:\n");
  scanf("%f", &numeroDigitado);

  valorTotal = (0.10 + 1) * numeroDigitado;

  printf("O valor total da conta(conta + 10%% do garcom)e:\n %.2f", valorTotal);

  return 0;
}