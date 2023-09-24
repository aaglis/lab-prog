// --somatório de dois números inteiros!--

#include <stdio.h>

int main(){
  int numero1;
  int numero2;
  int soma;
//int

 numero1, numero2, soma;

  printf("-----SOMATORIO DE DOIS NUMEROS INTEIROS!-----\n");
  
  printf("Digite o primeiro numero:\n");
  scanf("%d", &numero1); // lê o número digitado e armazena na variável digitada.
  
  printf("Digite o segundo numero:\n");
  scanf("%d", &numero2);

  soma = numero1 + numero2;

  printf("O resultado da soma e %d\n", soma); //mostra o resultado da soma
  return 0;
} // fim da função main