#include <stdio.h>

int main(void) {

  int numeroDigitado, votosPaulo = 0, votosRenata = 0, votosNulo = 0, totalVotos;
  float resultadoPaulo, resultadoRenata, resultadoNulo;

    puts("Digite o numero do seu candidato:");
    puts("\tQualquer numero positivo diferente de 5 e 7 - NULO");
    puts("\t(5 - PAULO\t7 - RENATA)");
    scanf("%d", &numeroDigitado);

  for(;;) {
    if(numeroDigitado == 5){
      votosPaulo += 1;
      puts("\nVOTO NO PAULO CONFIRMADO!\n");
    }
    if(numeroDigitado == 7) {
      votosRenata += 1;
      puts("\nVOTO NA RENATA CONFIRMADO!\n");
    }
    if(numeroDigitado >= 0){
      if(numeroDigitado != 5 && numeroDigitado != 7) {  
        votosNulo += 1;
        puts("\nVOTO NULO CONFIRMADO!\n");
      }
    }

    puts("Digite o numero do seu candidato:");
    puts("\tQualquer numero positivo diferente de 5 e 7 - NULO");
    puts("\tQualquer numero negativo = ENCERRA A VOTACAO");
    puts("\t(5 - PAULO\t7 - RENATA)");
    scanf("%d", &numeroDigitado);

    if(numeroDigitado < 0) {
      puts("Votacao encerrada!");
      break;
    }
  }

  totalVotos = votosNulo + votosPaulo + votosRenata;

  resultadoPaulo = (float)votosPaulo / totalVotos * 100;
  resultadoRenata = (float)votosRenata / totalVotos * 100;
  resultadoNulo = (float)votosNulo / totalVotos * 100;

  puts("Resultados:\n");

  printf("\tPAULO- %d votos ->\t%.0f%% dos votos\n", votosPaulo, resultadoPaulo);
  printf("\tRENATA - %d votos ->\t%.0f%% dos votos\n", votosRenata, resultadoRenata);
  printf("\tNULO - %d votos ->\t%.0f%% dos votos\n", votosNulo, resultadoNulo);

  if(resultadoPaulo > resultadoNulo && resultadoPaulo > resultadoRenata)
    puts("\n\tO CANDIDATO ELEITO - PAULO!");
  if(resultadoRenata > resultadoNulo && resultadoRenata > resultadoPaulo)
    puts("\n\tO CANDIDATO ELEITO - RENATA!");
  if(resultadoNulo > resultadoPaulo && resultadoNulo > resultadoRenata)
    puts("\n\tNENHUM CANDIDATO FOI ELEITO. UMA SEGUNDA ELEICAO SERA REALIZADA.");
  return 0;
}