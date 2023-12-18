#include <stdio.h>

struct estoque {
  char nomePeca[40];
  int codigo;
  float preco;
  int nPedido;
};

int main(void) {

  struct estoque product1;

  printf("Digite o nome do produto: ");
  fgets(product1.nomePeca, 40, stdin);

  printf("Digite o código do produto: ");
  scanf("%d", &product1.codigo);

  printf("Digite o preço do produto: ");
  scanf("%f", &product1.preco);

  printf("Digite o número do pedido: ");
  scanf("%d", &product1.nPedido);

  puts("===================");

  printf("Nome do produto: %s", product1.nomePeca);
  printf("Código do produto: %d\n", product1.codigo);
  printf("Preço do produto: %.2f\n", product1.preco);
  printf("Número do pedido: %d\n", product1.nPedido);
  
  return 0;
}