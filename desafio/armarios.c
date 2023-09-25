#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

  unsigned char armarios = 0b00000000;
  int escolha, posicaoArmario, desocuparArmario;

  srand(time(NULL));

  for (;;)
  {

    puts("Status dos armarios:\n");

    for (int i = 0; i < 8; i++)
    {
      if ((armarios & (1 << i)) == 0)
      {
        printf("%d - Livre.\t", i + 1);
      }
      else
      {
        printf("%d - Ocupado.\t", i + 1);
      }
    }

    puts("\n\nDigite um numero, correspondente ao que voce deseja fazer:\n");
    puts("[1] Ocupar um armario.\n[2] Desocupar um armario.\n[3] Sair.");
    scanf(" %d", &escolha);

    if (escolha == 3)
    {
      puts("Volte sempre.");
      break;
    }

    else if (escolha == 1)
    {
      if (armarios == 0b11111111)
      {
        puts("Todos os armarios estao ocupados! Desocupe um primeiro.\n");
      }
      else
      {
        do
        {
          posicaoArmario = rand() % 8;
        } while ((armarios & (1 << posicaoArmario)) != 0);

        armarios |= 1 << posicaoArmario;
        printf("\nArmario %d foi ocupado com sucesso.\n\n", posicaoArmario + 1);
      }
      continue;
    }
    else if (escolha == 2)
    {
      if (armarios == 0b00000000)
      {
        puts("Nenhum armario esta ocupado.\n");
        continue;
      }
      else
      {
        puts("\nEstes sao os armarios que estao ocupados: \n");

        for (int x = 0; x < 8; x++)
        {
          if ((armarios & (1 << x)) != 0)
          {
            printf("%d - Esta ocupado.\t", x + 1);
          }
        }

        puts("\n\nDigite o armario que voce deseja desocupar:");
        scanf("%d", &desocuparArmario);

        if (desocuparArmario < 0 || desocuparArmario > 8)
        {
          puts("Nao existe um armario correspondente ao numero que voce digitou. Tente novamente.\n");
          continue;
        }
        if ((armarios & (1 << (desocuparArmario - 1))) == 0)
        {
          puts("O armario informado nao esta ocupado.\n");
          continue;
        }
        else
        {
          armarios &= ~(1 << (desocuparArmario - 1));
          printf("O armario %d foi desocupado.\n", desocuparArmario);
        }
      }
      continue;
    }
  }

  return 0;
}