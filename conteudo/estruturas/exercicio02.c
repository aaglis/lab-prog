// troca o a idade e a altura da pessoa, atraves de funcoes com structs
#include <stdio.h>

struct pessoa
{
  char nome[50];
  int idade;
  float altura;
};

struct pessoa trocarDados(struct pessoa x);



int main(void) {

  struct pessoa p1;
  struct pessoa novaPessoa;

  puts("Digite seu nome:");
  gets(p1.nome);

  puts("Digite sua idade:");
  scanf("%d", &p1.idade);

  puts("Digite sua altura:");
  scanf("%f", &p1.altura);

  novaPessoa = trocarDados(p1);

  puts("Seus dados antigos:");
  printf("nome: %s\nidade: %d\naltura: %.2f\n", p1.nome, p1.idade, p1.altura);
  puts("A partir de agora, sua idade e altura sao outras:");
  printf("nome: %s\nidade: %d\naltura: %.2f", novaPessoa.nome, novaPessoa.idade, novaPessoa.altura);

}

struct pessoa trocarDados(struct pessoa x) {
  x.altura = 1.60;
  x.idade = 20;

  return x;
}