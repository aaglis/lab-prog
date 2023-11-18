#include <stdio.h>
#define TAM 3
int main(void) {

  int matriz[TAM][TAM], i, k;
  //gera a matriz com os numeros digitados pelo usuario
  puts("Digite os elementos da mariz ->");
  for(i = 0; i < TAM; i++) {
    for(k = 0; k < TAM; k++) {
      printf("linha %d, coluna %d:", i, k);
      scanf("%d", &matriz[i][k]);
    }
  }
  //imprime a matriz
  puts("Resultado matriz:");
  for(i = 0; i < TAM; i++) {
    for(k = 0; k < TAM; k++) {
      printf("\t%d ", matriz[i][k]);
    }
    puts("");
  }
  // mostra os numeros da diagonal
  puts("Numeros da diagonal: ");
  i = 0;
  for(k = 2; k >= 0; k--) {
    printf("\t%d ", matriz[i][k]);
    i++;
  }
  puts("");

  return 0;
}