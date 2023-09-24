#include <stdio.h>

int main(void) {
  
  int num1, num2;
  printf("Digite dois numeros inteiros e eu direi\n a relacao deles.\n");

  scanf("%d%d", &num1, &num2); // Lê dois números inteiros
  if(num1 == num2)
    printf("%d e igual a %d\n", num1, num2);
  if(num1 != num2)
    printf("%d e diferente de %d\n", num1, num2);
  if(num1 < num2)
    printf("%d e menor que %d\n", num1,num2);
  if(num1 > num2)
    printf("%d e maior que %d\n", num1,num2);
  if(num1 <= num2)
    printf("%d e menor ou igual que %d\n", num1,num2);
  if(num1 >= num2)
    printf("%d e maior ou igual que %d\n", num1,num2);

  return 0;
}