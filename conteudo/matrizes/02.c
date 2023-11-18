// insere os dados digitados pelo usuario na matriz e devolve o resultado
#include <stdio.h>

int main(void) {

  int matriz[3][3];

  puts("Digite os dados:");

  for(int i = 0; i < 3; i++) {

    for(int k = 0; k < 3; k++) {
      printf("linha %d, coluna %d: ", i, k);
      scanf("%d", &matriz[i][k]);
    }

  }

  puts("Resultado da matriz: ");

  for(int i = 0; i < 3; i++) {
    for(int k = 0; k < 3; k++) {
      printf("\t%d ", matriz[i][k]);
    }
    puts("");
  }
  return 0;
}