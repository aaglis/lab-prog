#include <stdio.h>

int main(void) {

  int i, quoc, resto, pot2, numReceb;

  for(i = 1; i < 256; i++) {

    printf("\n\tinteiro: %d - octal :%o - hexa: %x - binario: ", i, i, i);


    numReceb = i;
    for (pot2 = 1; pot2 <= numReceb / 2; pot2 *= 2);

    // Converte o número para binário usando divisões sucessivas
    while (pot2 > 0) {
      quoc = numReceb / pot2;  // Encontra a parte inteira da divisão
      resto = numReceb % pot2;  // Encontra o resto da divisão

      printf("%d", quoc);  // Imprime o dígito binário

      numReceb = resto;  // Atualiza o número para o resto da divisão
      pot2 /= 2;  // Divide a potência de 2 por 2
    }
  }


  return 0;
}