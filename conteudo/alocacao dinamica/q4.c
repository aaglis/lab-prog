/*
  O que eu observei é que quando eu mudo o tipo da variavel, a alocação
  dinâmica altera o tamanho da memória reservada, respectivamente.
  e e todos os meus testes, o espaço de memória foi alocado de 
  forma sequêncial.
*/


#include <stdio.h>
#include <stdlib.h>

void mostrarValorEndereco(int tamanhoVetor, int *ponteiroInt);

int main(void)
{

  int *ponteiroInt;
  int tamVetor, numeroDigitado;
  printf("Digite o tamanho do seu vetor: ");
  scanf("%d", &tamVetor);

  ponteiroInt = (int *)malloc(sizeof(int));

  for (int i = 0; i < tamVetor; i++)
  {

    printf("Digite o %do numero: ", i + 1);
    scanf("%d", &numeroDigitado);
    ponteiroInt[i] = numeroDigitado;
  }

  mostrarValorEndereco(tamVetor, ponteiroInt);

  return 0;
}

void mostrarValorEndereco(int tamanhoVetor, int *ponteiroInt)
{
  puts("");
  puts("Seu vetor com seus respectivos enderecos:");
  for (int i = 0; i < tamanhoVetor; i++)
  {
    printf("\t%d\t%p\n", ponteiroInt[i], &ponteiroInt[i]);
  }
}