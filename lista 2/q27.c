#include <stdio.h>

int main(void) {

  int numDigitado, maiorNum, menorNum;

  puts("Digite um numero:");
  scanf("%d", &numDigitado);

  maiorNum = numDigitado;
  menorNum = numDigitado;

  if(numDigitado < 0 && numDigitado % 2 == 0) {
    puts("Programa encerrado.");
  }


  for(;;) {

    if(numDigitado > maiorNum) {
      maiorNum = numDigitado;
    }
    if(numDigitado < menorNum) {
      menorNum = numDigitado;
    }

    printf("\n\tmaior numero: %d\n\tmenor numero: %d\n", maiorNum, menorNum);
    printf("\t%d * %d = %d\n", maiorNum, menorNum, maiorNum * menorNum);

    puts("Digite outro numero [digite um numero negativo e PAR para encerrar]:");
    scanf("%d", &numDigitado);

    if(numDigitado < 0 && numDigitado % 2 == 0) {
      puts("Programa encerrado.");
      break;
    }



  }


  return 0;
}