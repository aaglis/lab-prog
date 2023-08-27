#include <stdio.h>

int main(void) {

  float diasTrabalhados, diaria, bonificacao, valorPadrao, valorTotal;

  diaria = 50.25;

  printf("Digite quantos dias voce trabalhou: ");
  scanf("%f", &diasTrabalhados);

  valorPadrao = diasTrabalhados * diaria;
  if (diasTrabalhados <= 0)
  {
    printf("Numero de dias trabalhos nao aceito. tente novamente.\n");
  }
  else if (diasTrabalhados > 10 && diasTrabalhados <= 20)
  {
    bonificacao = 0.20 * valorPadrao;
    valorTotal = bonificacao + valorPadrao;
  }
  else if (diasTrabalhados > 20 && diasTrabalhados <= 30)
  {
    bonificacao = 0.30 * valorPadrao;
    valorTotal = bonificacao + valorPadrao;
  }

  printf("O valor total que voce vai receber e: %.2f", valorTotal);

  return 0;
}