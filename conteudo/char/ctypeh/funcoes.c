#include <stdio.h>
#include <ctype.h>

int main(void) {
  //verifica se é uma letra alfabética
  char letra1 = 'A';
    if (isalpha(letra1)) {
        printf("%c e uma letra alfabetica.\n", letra1);
    } else {
        printf("%c nao e uma letra alfabetica.\n", letra1);
    }
  //verifica se é um numero ou nao
  char digito = '7';
    if (isdigit(digito)) {
        printf("%c e um digito numerico.\n", digito);
    } else {
        printf("%c nao e um digito numerico.\n", digito);
    }
  //verifica se é uma letra maiúscula
  char letra2 = 'b';
    if (islower(letra2)) {
        printf("%c e uma letra minuscula.\n", letra2);
    } else {
        printf("%c nao e uma letra minuscula.\n", letra2);
    }
  //verifica se é uma letra minúscula
  char letra3 = 'X';
    if (isupper(letra3)) {
        printf("%c e uma letra maiuscula.\n", letra3);
    } else {
        printf("%c nao e uma letra maiuscula.\n", letra3);
    }
  // verifica se é um espaço
  char caractere = ' ';
    if (isspace(caractere)) {
        printf("%c e um espaco em branco.\n", caractere);
    } else {
        printf("%c nao e um espaço em branco.\n", caractere);
    }
  //altera de maiúsculo para minúsculo
  char letra4 = 'H';
    char letraMinuscula = tolower(letra4);
    printf("Letra original: %c, Letra em minuscula: %c\n", letra4, letraMinuscula);

  //altera de minúsculo para maiúsculo
  char letra5 = 't';
    char letraMaiuscula = toupper(letra5);
    printf("Letra original: %c, Letra em maiuscula: %c\n", letra5, letraMaiuscula);

  return 0;
}