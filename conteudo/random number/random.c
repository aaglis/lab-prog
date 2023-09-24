#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {


  int numeroAleatorio, numeroDigitado, escolha;

  srand(time(NULL));

  puts(" JOGO DA SORTE!");

  for (;;) {

    puts("adivinhe o numero que a maquina ira pensar (entre 0 e 50): ");
    scanf("%d", &numeroDigitado);

    numeroAleatorio = rand() & 51;

    if(numeroDigitado == numeroAleatorio){
      puts("\nVocê acertou! a maquina pensou no mesmo numero que voce.\n");
    }
    else {
      puts("\nInfelizmente voce nao acertou :(\n");
    }
      puts("Quer tentar de novo?\n");
      puts("[1] Sim.\n[2] Nao.");
      scanf("%d", &escolha);
    if(escolha == 1) {
      continue;
    }
    else {
      puts("Volte sempre!");
      break;
    }
  }
  return 0;
}