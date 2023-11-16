#include <stdio.h>

int main(void) {

  int num1, num2, troca, i, contador = 0, somatorio = 0;
  float resultado;

  puts("Digite o primeiro numero:");
  scanf("%d", &num1);
  puts("Digite o segundo numero: ");
  scanf("%d", &num2);

  if(num1 > num2) {
    troca = num1;
    num1 = num2;
    num2 = troca;
  }
  for(i = num1 + 1; i < num2; i++) {
    somatorio += i;
    contador++;
  }

  resultado = (float)somatorio / contador;

  printf("\tSomatorio de todos os numeros entre %d e %d: %d\n", num1, num2, somatorio);
  printf("\tMedia aritimetica: %.2f\n", resultado);

  return 0;
}