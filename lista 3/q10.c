#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3
int main(void) {

  srand(time(NULL));

  int vetor[TAM][TAM], i, k, contador = 0, numeroDigitado;

  printf("Digite um numero inteiro (entre 0 e 100): ");
  scanf("%d", &numeroDigitado);

  //gera a matriz aleatoria
  for(i = 0; i < TAM; i++) {
    for(k = 0; k < TAM; k++) {
      vetor[i][k] = rand() % 101;
    }
  }

  //contagem de numeros iguais ao numero digitado
  for(i = 0; i < 3; i++){
    for(k = 0; k < 3; k++) {
      if(vetor[i][k] == numeroDigitado) {
        contador++;
      }
    }
  }

  //print do vetor no prompt
  puts("Vetor gerado aleatoriamente: ");
  for(i = 0; i < 3; i++){
    for(k = 0; k < 3; k++) {
      printf("\t%d ", vetor[i][k]);    
    }
    puts("");
  }

  printf("O numero %d aparece %d vezes.", numeroDigitado, contador);

  return 0;
}