//mostra o endereço para qual o ponteiro está apontando e valor que está alocado no endereço que ele está apontando
#include <stdio.h>

int main(void)
{

  int x = 10;
  int *ponteiro; // recebe o endereço de memoria da variavel.
  
  ponteiro = &x;

  printf("endereco para qual o ponteiro esta apontando: %p\n", ponteiro);
  printf("valor que esta contido dentro do endereco para qual o ponteiro esta apontando: %d", *ponteiro);


  return 0;
}