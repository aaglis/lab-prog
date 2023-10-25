// digite um nome, e só imprima na tela se
// o nome digitado começar com a letra A.

#include <stdio.h>
#include <ctype.h>

int main(void)
{

  char textoDigitado[50];
  int i = 0, j = 0;

  puts("Digite o seu nome:");
  fgets(textoDigitado, 50, stdin);

  while (isspace(textoDigitado[i]))
  {
    i++;
  }

  while (textoDigitado[i] != '\0')
  {
    textoDigitado[j] = textoDigitado[i];
    i++;
    j++;
  }
  textoDigitado[j] = '\0';


  if (textoDigitado[0] == 'A' || textoDigitado[0] == 'a')
  {
    puts("Seu nome comeca com A, ele pode ser printado.");
    printf("Nome: %s", textoDigitado);
  }
  else
  {
    puts("seu nome nao comeca com a letra A.");
    puts("Nao pode ser printado na tela.");
  }
  return 0;
}