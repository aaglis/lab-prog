#include <stdio.h>

int main(void)
{

  int x = 10;
  int y = 20;
  int *ponteiro = &x; // recebe o endereço de memoria da variavel.
  
  printf("valor da variavel x: %d\n", x);
  printf("valor da variavel y: %d\n", y);
  printf("end. de memoria da variavel x: %p\n", &x);
  printf("ponteiro apontando o valor que esta amazenado no endereco da variavel x: %d\n", *ponteiro);
  printf("ponteiro mostrando o endereco da variavel x: %p\n", ponteiro);

  *ponteiro = y;

  printf("alterando o valor de x: %d\n", *ponteiro);

  return 0;
}