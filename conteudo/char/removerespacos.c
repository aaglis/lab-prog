#include <stdio.h>
#include <ctype.h>

int main(void)
{

  char textoDigitado[50];
  int i = 0, j = 0;

  puts("Digite o seu nome:");
  fgets(textoDigitado, 50, stdin);

  printf("Seu nome (com espacos): %s", textoDigitado);

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
  printf("Seu nome (sem espacos): %s", textoDigitado);

return 0;
}