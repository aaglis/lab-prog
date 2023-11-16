#include <stdio.h>

int main (void) {

  int numeroDigitado, numOriginal, compararDigito, contador = 0;

  puts("Digite um numero inteiro: ");
  scanf("%d", &numeroDigitado);

  numOriginal = numeroDigitado;

  while(numeroDigitado != 0) {
    compararDigito = numeroDigitado % 10;
    if(compararDigito == 7) {
      contador++;
    }

    numeroDigitado /= 10;
  }
  
  printf("Voce digitou o numero %d, e ele tem %d numeros 7s.", numOriginal, contador);


  return 0;
}