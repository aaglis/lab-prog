#include <stdio.h>

int main(void) {

  int num1, num2;

  puts("Digite o primeiro numero do invervalo: ");
  scanf("%d", &num1);
  puts("Digite o segundo numero do invervalo: ");
  scanf("%d", &num2);

  printf("numeros multiplos de 4 entre %d e %d (e seus respectivos quadrados):\n\n", num1, num2);
  if (num1 > num2) {
    for (int i = num1; i >= num2; i--) {
      if (i % 4 == 0) {
        printf("\t%d\t%d\n", i, i * i);//mostra do maior para o menor
      }
    }
  }
  else {
    for (int i = num1; i <= num2; i++) {
      if (i % 4 == 0) {
        printf("\t%d\t%d\n", i, i * i);// mostra do menor para o maior
      }
    }
  }
  return 0;
}