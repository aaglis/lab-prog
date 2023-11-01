//programa que informa a quantidade de 1's digitados pelo usuario
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {

  char texto[50];
  int i = 0, j = 0, tamanho, contadorElementos;

  //receber o numero informado pelo usuário
  puts("Digite um numero binario: ");
  fgets(texto, 50, stdin);

  //remove os espaços iniciais da string
  if(isspace(texto[0])) {
    while(isspace(texto[i])) {
      i++;
    }
    while(texto[j] != '\0') {
      texto[j] = texto[i];
      i++;
      j++;
    }
    texto[j] = '\0';
  }

  tamanho = strlen(texto); //qntd de elementos na string

  //contagem de 1's
  for(i = 0; i < tamanho; i++) {
    if(texto[i] == '1') {
      contadorElementos++;
    }
  }

  if(contadorElementos == 0) {
    printf("Voce digitou o numero %sEle nao tem nenhum 1.", texto);  
  }
  else {
    printf("Voce digitou o numero %sEle tem %d 1's.", texto, contadorElementos);  
  }


  return 0;
}