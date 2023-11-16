#include <stdio.h>

int main() {

  int numeroDigitado, inverso = 0, original, resto, contadorDigitos = 0, verificarDigitos;

  printf("Digite um numero inteiro de 5 digitos: ");
  scanf("%d", &numeroDigitado);

  verificarDigitos = numeroDigitado;

  while(verificarDigitos > 0) {
    verificarDigitos /= 10;
    contadorDigitos++; // faz a contagem de digitos do numero digitado
  }

  if(contadorDigitos > 5) {
  puts("O numero digitado tem mais de 5 digitos. digite outro numero.");
  return 0;
  }
  if(contadorDigitos < 5) {
  puts("O numero digitado tem menos de 5 digitos. digite outro numero.");
  return 0;
  }

  original = numeroDigitado;

  while (numeroDigitado > 0) { // inverte o numero
    resto = numeroDigitado % 10;
    inverso = inverso * 10 + resto;
    numeroDigitado /= 10;
  }
  if (original == inverso) {
    printf("\t%d e um palindromo\n", original);
  } 
  else {
    printf("\t%d nao e um palindromo\n", original);
  }

  return 0;
}
