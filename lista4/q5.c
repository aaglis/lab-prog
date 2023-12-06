#include <stdio.h>
#define TAM 50

int contadorString(char *string);

int main(void) {

  char string[TAM];

  
  puts("Digite sua string: ");
  fgets(string, TAM, stdin);

  printf("Quantidade de caracteres da sua string: %d", contadorString(string));
  
  return 0;
}

int contadorString(char *string) {

  char *ponteiroString = string;
  int contador = 0;

  while(*ponteiroString != '\n') {
    contador++;
    ponteiroString++;
  } 
  return contador;
}