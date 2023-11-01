//recebe dois valores e retorna qual o maior valor deles
#include <stdio.h>

int maiorOuMenor(int num1, int num2);

int main(void) { 

  int  x, y, maior;

  puts("Digite um numero:");
  scanf("%d", &x);
  puts("Digite outro numero: ");
  scanf("%d", &y);

  maior = maiorOuMenor(x, y);

  printf("o maior numero digitado e: %d", maior);

  return 0;
}

int maiorOuMenor(int num1, int num2) {

  if(num1 > num2)
    return num1;
  else
    return num2;
}