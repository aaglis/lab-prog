#include <stdio.h>

int main(void) {

  float valorDigitado, valorEntrada, valorParcela;
  
  puts("Digite o valor do produto: ");
  scanf("%f", &valorDigitado);

  valorEntrada = (int)valorDigitado % 3 == 0 ? valorDigitado / 3 : (int)valorDigitado / 3 + (int)valorDigitado % 3; //valor do numero digitado por 3 somado com o resto da divisao do numero digitado por 3
  valorParcela = valorDigitado / 3;

  printf("o valor do produto e %.0f:\n\n", valorDigitado);
  printf("\t%.2f de entrada\t + \tduas parcelas de %.2f", valorEntrada, valorParcela);
  return 0;
}