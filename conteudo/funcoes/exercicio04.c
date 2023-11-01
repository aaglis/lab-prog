// Crie uma função que receba um valor e diga se é nulo ou não.
#include <stdio.h>

void nuloOuNao(int valorDigitado);

int main(void) {

  int valorDigitado;

  puts("Digite um valor: ");
  scanf("%d", &valorDigitado);

  nuloOuNao(valorDigitado);

  return 0;
}

void nuloOuNao(int valorDigitado) {

  if(valorDigitado == 0)
    puts("Voce digitou um valor nulo!");
  else
    puts("Voce nao digitou um valor nulo!");
}