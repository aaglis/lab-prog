// inserindo ponteiros dentro da estrutura e mudando valores de variáveis com os ponteiros da estrutura
#include <stdio.h>

struct ponteiros
{

  int *pNum1, *pNum2;
};

int main(void)
{

  struct ponteiros pNumeros;
  int varNum1 = 10;
  int varNum2 = 20;

  pNumeros.pNum1 = &varNum1;
  pNumeros.pNum2 = &varNum2;

  printf("valor do numero 1 acessado pelo ponteiro: %d\n", *pNumeros.pNum1);
  printf("valor do numero 2 acessado pelo ponteiro: %d\n", *pNumeros.pNum2);
  puts("trocando os valores:");

  *pNumeros.pNum1 = 50;
  *pNumeros.pNum2 = 130;


  printf("novo valor do numero 1 acessado pelo ponteiro: %d\n", *pNumeros.pNum1);
  printf("novo valor do numero 2 acessado pelo ponteiro: %d\n", *pNumeros.pNum2);

  return 0;
}