#include <stdio.h>

int main(){

  int x; //declarei a variável
  x = 7 + 3 * 6 / 2 - 1;
  printf("%d\n", x);
   /*
   primeiro são executados os operadores de multiplicação e divisão, e
   depois os operadores de soma e subtração(quando a expressão possui várias
   operações no mesmo nivel de precedência, o cálculo é realizado da esquerda
   para a direita.).
   */

  x = 2 % 2 + 2 * 2 - 2 / 2;
  printf("%d\n", x);
  /*
    o operador %(resto) também está no mesmo nivel de precedência da multiplica-
    ção e divisão, ou seja, como a expressão tem vários operadores do mesmo nivel
    precedência(divisão, multiplicação e resto), o cálculo é realizado da esquerda 
    para a direita.
  */

  x = (3 * 9 *(3 +(9 * 3 /(3))));
  printf("%d\n", x);
  /*
    quando a expressão ou parte dela está localizada entre parênteses, ela será
    executada primeiro. Porém em casos de expressões que contenha parênteses
    aninhados ou embutidos, a expressão contida no par de parênteses mais inteiro
    é calculada em primeiro lugar.
  */ 
  return 0;
}