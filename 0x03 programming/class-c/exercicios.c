#include <stdio.h>
#include "exercicios.h"

int main(void) {

  // exercício 1) --------------------------------

  printf("\n>>> exercício 1\n");
  ex1();
  printf("\n");

  // exercício 2) --------------------------------

  printf("\n>>> exercício 2\n");
  ex2();
  printf("\n");

  // exercício 3) --------------------------------

  printf("\n>>> exercício 3\n");
  printf("média\n%.2lf", media(1,2,3));
  printf("\n");

  // exercício 4) --------------------------------

  printf("\n>>> exercício 4\n");
  int temperaturas [] = { 12, 15, 19, 21, 20, 23, 25, 22, 18, 16 };
  printf("temperatura media\n%.2f°C", media_vetor(temperaturas, 10));
  printf("\n");

  // exercício 5) --------------------------------

  printf("\n>>> exercício 5\n");
  int vetor [] = { 12, 15, 19, 21, 20, 23, 25, 22, 98, 16 };
  printf("maior\n%d", ex5(vetor, 10));
  printf("\n");

  // exercício 6) --------------------------------

  printf("\n>>> exercício 6\n");
  int v [] = { 12, 15, 19, 21, 20, -3, 25, 22, 98, 16 };
  printf("menor\n%d", ex6(v, 10));
  printf("\n");

  // exercício 7) --------------------------------

  printf("\n>>> exercício 7\n");

  // exercício 8) --------------------------------

  printf("\n>>> exercício 8\n");

  return 0;
}

// build: gcc exercicios.c -o e
// run: ./e
