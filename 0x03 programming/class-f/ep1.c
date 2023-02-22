#include <stdio.h>
#include "ep1.h"

int main(void) {
  //printf("\nparte 1\n");
  //sequencia(3);

  printf("\nparte 2\n");
  printf("nº de passos de 3 -> %u", passos(3)-2);

  return 0;
}

// build: gcc ep1.c -o ep1
// run: ./ep1