#include <stdio.h>
#include <string.h>

int main(void) {

  char texto[20];
  char comando[20] = {"/sair"};
  int resultado;

  for(;;) {
  puts("digite o comando chave: ");
  gets(texto);

  resultado = strcmp(comando, texto);

  if(resultado == 0){
    puts("Voce digitou o comando chave! volte sempre.");
    break;
  }
  else {
    puts("Voce nao digitou o comando chave! tente novamente");
    continue;
  }
  }
  return 0;
}