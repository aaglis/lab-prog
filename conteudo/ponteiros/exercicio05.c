#include <stdio.h>

struct lista {

  int numeroGuardado;
  struct lista *proximo;
};


int main(void) {

  struct lista member1, member2, member3;
  struct lista *passo;

  passo = &member1;

  member1.numeroGuardado = 10;
  member2.numeroGuardado = 20;
  member3.numeroGuardado = 30;

  member1.proximo = &member2;
  member2.proximo = &member3;
  member3.proximo = (struct lista *)0;


  while(passo != (struct lista *)0) {
    printf("%d\n", passo -> numeroGuardado);
    passo = passo->proximo;  
  
  }


  return 0;
}