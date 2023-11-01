// fazer o calculo completo de uma equacao do segundo grau
#include <stdio.h>
#include <math.h>

double calcularDelta(int a, int b, int c);
double primeiraRaiz(int a, int b, double delta);
double segundaRaiz(int a, int b, double delta);

int main(void){

  int a, b, c;
  double delta, valor1, valor2;

  puts("Informe o valor de A:");
  scanf("%d", &a);
  puts("Informe o valor de B:");
  scanf("%d", &b);
  puts("Informe o valor de C:");
  scanf("%d", &c);

  if(a == 0) {
    puts("nao existe raizes se o valor de A for 0");
    return 0;
  }

  delta = calcularDelta(a, b ,c);

  if(delta < 0) {
    printf("O valor do delta e %.2f(negativo), e suas raizes sao complexas.", delta);
    return 0;
  }

  valor1 = primeiraRaiz(a, b, delta);
  valor2 = segundaRaiz(a, b, delta);

  printf("O valor do delta e: %.2f\n", delta);
  printf("As raizes da equacao sao: %.6f e %.6f", valor1, valor2);

  return 0;
}

double calcularDelta(int a, int b, int c) {

  double resultado = (pow(b, 2) - 4 * (a * c));

  return resultado;
}

double primeiraRaiz(int a, int b, double delta) {

  double valor1 = (-b + ( sqrt ( delta ) ) ) / (2 * a);

  return valor1;
}
double segundaRaiz(int a, int b, double delta) {

  double valor2 = (-b - ( sqrt ( delta ) ) ) / (2 * a);

  return valor2;
}