#include <stdio.h>
#include <stdlib.h>
#define TAM 100

struct pessoa {
  char nome[TAM];
  int idade;
  char curso[TAM];
};

void receberDados(struct pessoa *d);
void arquivoCSV(struct pessoa *d, FILE *arquivo);

int main(int argc, char *argv[]) {

  int qntdPessoas = atoi(argv[1]);

  struct pessoa pessoas[qntdPessoas];

  FILE *arquivo = fopen(arquivoCSV, "w");
  fprintf(arquivoCSV, "Nome,Idade,Curso\n");

  for(int i = 0; i < qntdPessoas; i++) {
    receberDados(&pessoas[i]);
    arquivoCSV(&pessoas[i], arquivo);
  }

  return 0;
}

void receberDados(struct pessoa *d) {
  printf("Nome: ");
  fgets(d->nome, TAM, stdin);
  fflush(stdin);

  printf("Idade: "); 
  scanf("%d", &d->idade);

  printf("Curso: ");
  fgets(d->curso, TAM, stdin);
  getchar();
}

void arquivoCSV(struct pessoa *d, FILE *arquivo) {
  fprintf(arquivo, "%s,%d,%s\n", d->nome, d->idade, d->curso);
}