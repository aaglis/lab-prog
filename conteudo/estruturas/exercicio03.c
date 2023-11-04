//receba o nome e idade de 10 pessoas, e armazene em uma estrutura de vetor
#include <stdio.h>

struct pessoa {

  char nome[50];
  int idade;
};

int main(void) {
  int i;
  struct pessoa Pessoas[10];

  for(i = 0; i < 10; i++) {

    printf("Nome da %do pessoa:\n ", i + 1);
    fgets(Pessoas[i].nome, 50, stdin);

    printf("Idade da %do pessoa:\n ", i + 1);
    scanf("%d", &Pessoas[i].idade);
    puts("");

    fflush(stdin);
  }

  puts("Dados informados:");

  for(i = 0; i < 10; i++) {

    printf("%do pessoa:\n", i + 1);
    printf("nome: %sidade: %d\n", Pessoas[i].nome, Pessoas[i].idade);
  }



  return 0;
}