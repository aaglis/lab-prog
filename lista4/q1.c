#include <stdio.h>

int main(void) {

  int var1, var2, resultado;
  int *ponteiro1, *ponteiro2;

  ponteiro1 = &var1;
  ponteiro2 = &var2;

  *ponteiro1 = 10;
  *ponteiro2 = 20;

  resultado = *ponteiro1 + *ponteiro2;

  printf("\tvalor adicionado na primeira variavel atraves do primeiro ponteiro: %d\n", *ponteiro1);
  printf("\tvalor adicionado na segunda variavel atraves do segundo ponteiro: %d\n", *ponteiro2);
  printf("\tsoma dos dois valores: %d\n", resultado);
  printf("\tendereco de memoria do local da soma: %p\n", &resultado);

  return 0;
}