#include <stdio.h>
#include <string.h>

int main(void)
{

  char texto[50];
  int tamanho;


  puts("Digite um texto e descubra o tamanho dele:");
  fgets(texto, 50, stdin);

  tamanho = strlen(texto);

  printf("O tamanho do texto e: %d\n", tamanho);

  return 0;
}