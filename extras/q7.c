#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int *pNum = (int *)malloc(sizeof(int));

  *pNum = 42;

  printf("%d\n", *pNum);  

  free(pNum);

  return 0;
}