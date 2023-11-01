// calcula o delta de uma equacao do segundo grau
#include <stdio.h>
#include <math.h>

float calcularDelta(int a, int b, int c);

int main(void){

  int a, b, c;
  float delta;

  puts("Informe o valor de A:");
  scanf("%d", &a);
  puts("Informe o valor de B:");
  scanf("%d", &b);
  puts("Informe o valor de C:");
  scanf("%d", &c);

  delta = calcularDelta(a, b ,c);

  printf("O valor do delta e: %.2f", delta);

  return 0;
}

float calcularDelta(int a, int b, int c) {

  float resultado = (pow(b, 2) - 4 * (a * c));

  return resultado;
}