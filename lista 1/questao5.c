#include <stdio.h>

int main(void)
{

  float numeroDigitado, valorTotal, porcentagem;

  printf("Digite um valor da conta:\n");
  scanf("%f", &numeroDigitado);

  porcentagem = 0.10 * numeroDigitado;

  valorTotal = numeroDigitado + porcentagem;

  printf("O valor total da conta(conta + 10%% do garcom)e:\n %.2f", valorTotal);

  return 0;
}