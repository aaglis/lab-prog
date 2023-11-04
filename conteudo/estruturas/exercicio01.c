#include <stdio.h>

struct Pessoa
{
  char nome[50];
  int idade;
  float altura;
};

int main(void)
{

  struct Pessoa p1;

  puts("Digite seu nome:");
  fgets(p1.nome, 50, stdin);

  puts("Digite sua idade:");
  scanf("%d", &p1.idade);
  
  puts("Digite sua altura:");
  scanf("%f", &p1.altura);

  printf("Seu nome e: %s", p1.nome);
  printf("Sua idade e: %d\n", p1.idade);
  printf("Sua altura e: %.2f\n", p1.altura);

  return 0;
}