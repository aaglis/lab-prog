#include <stdio.h>

int main (void) {

  float cotacaoDolar, valorReal, conversao;

  printf("Digite o valor(em BRL) que voce deseja converter para dolar: ");
  scanf("%f", &valorReal);

  printf("Agora digite o valor da cotacao do dolar que voce deseja converter: ");
  scanf("%f", &cotacaoDolar);

  conversao = valorReal / cotacaoDolar;

  printf("%f, convertido para DOLAR, e: %.2f", valorReal, conversao);

  return 0;
}