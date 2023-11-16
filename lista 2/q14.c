#include <stdio.h>

int main(void) 
{

  int num1, num2, troca, i, contador = 0;

  puts("Digite o primeiro numero:");
  scanf("%d", &num1);
  puts("Digite o segundo numero:");
  scanf("%d", &num2);

  if(num1 > num2) {
    troca = num1;
    num1 = num2;
    num2 = troca;
  }

  for(i = num1; i <= num2; i++) {
    if(i % 3 == 0) {
      contador++;
    }
  }

  printf("Qntd de numeros divisiveis por 3 entre %d e %d: %d", num1, num2, contador);

  return 0;
}