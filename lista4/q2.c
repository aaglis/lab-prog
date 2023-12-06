#include <stdio.h>

int main(void) {

  int num1, num2;
  int *p1, *p2;

  p1 = &num1;
  p2 = &num2;

  num1 = 10;
  num2 = 20;

  printf("\tValores de num1 e num2: %d, %d\n", num1, num2);

  *p1 = 25;
  *p2 = 71;

  printf("\tNovos valores: %d, %d\n", num1, num2);


  return 0;
}