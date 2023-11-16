#include <stdio.h>

int main(void)
{

  int num1, num2, troca, somatorio = 0, i;
  puts("Digite o primeiro numero: ");
  scanf("%d", &num1);

  puts("Digite o segundo numero: ");
  scanf("%d", &num2);

  if (num1 > num2)
  { /* os pares no intervalo digitado nao serao mostrados,
    entao posso fazer a troca para economizar linha. */
    troca = num1; 
    num1 = num2;
    num2 = troca;
  }

  for (i = num1; i <= num2; i++)
  {
    if (i % 2 == 0)
    {
      somatorio += i;
    }
  }

  printf("O somatorio de todos os numeros pares entre %d e %d: %d", num1, num2, somatorio);

  return 0;
}