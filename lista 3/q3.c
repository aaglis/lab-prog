#include <stdio.h>
#define TAM 50

int main(void) {

  unsigned int i = 0;
  char string[TAM];

  printf("Digite uma string: ");
  fgets(string, TAM, stdin);

  i = 0;

  while(string[i] != '\n') { // eu colocasse \0 ao inves de \n, ele iria incluir a quebra de linha
    i++;
  }

  printf("sua string tem %u caracteres.", i);

  return 0;
}