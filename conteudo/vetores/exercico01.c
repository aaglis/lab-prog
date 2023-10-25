// receber numeros informados pelo usuario, armazená-los no vetor e depois imprimi-los na tela

#include <stdio.h>

int main(void) {

  int vetor[5], i;

  puts("Digite o valores a serem armazenados no vetor:");

  for(i = 0; i<= 4; i++) {
    printf("Valor %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  for(i = 0; i<=4; i++) {

    printf("%d: %d\n", i+1, vetor[i]);
  }

  return 0;
}