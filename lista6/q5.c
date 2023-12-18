#include <stdio.h>
#define TAM 100

struct professor {
  char nome[TAM];
  char formacao[TAM];
};
struct disciplina {
  char nome[TAM];
  int carga_horaria;
  struct professor prof;
};

void receberDados(struct disciplina *d);
void imprimirDados(struct disciplina *d);

int main(void) {

  struct disciplina disciplina1;

  receberDados(&disciplina1);
  imprimirDados(&disciplina1);
  
  return 0;
}

void receberDados(struct disciplina *d) { 
  printf("Digite o nome da disciplina: ");
  fgets(d->nome, TAM, stdin);
  
  printf("Digite a carga horária: ");
  scanf("%d", &d->carga_horaria);
  getchar();
  
  printf("Digite o nome do professor: ");
  fgets(d->prof.nome, TAM, stdin);
  
  printf("Digite a formação do professor: ");
  fgets(d->prof.formacao, TAM, stdin);
}

void imprimirDados(struct disciplina *d) {
  printf("Nome da disciplina: %s", d->nome);
  printf("Carga horária: %d\n", d->carga_horaria);
  printf("Nome do professor: %s", d->prof.nome);
  printf("Formação do professor: %s", d->prof.formacao);
}