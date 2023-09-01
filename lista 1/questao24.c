#include <stdio.h>

int main() {
    
  int x, n, produto;

  // Solicita o valor de x
  printf("Entre com o valor de x: ");
  scanf("%d", &x);

  // Solicita o valor de n
  printf("Entre com o valor de n: ");
  scanf("%d", &n);

  // Calcula o produto usando operações binárias
  produto = x << n;

  // Imprime o resultado
  printf("O produto é: %d\n", produto);

  return 0;
}
