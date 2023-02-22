#include <stdio.h>
#include "main.h"

int main(void) {
  printf("exemplo\n");
  printf("main 1\n");
  exemplo(1);
  printf("main 2\n");

  printf("\ncontagem regressiva...\n");
  contagem_regressiva(10);

  printf("\nsoma\n");
  printf("= %u", soma(10));

  printf("\n\nvetor\n");
  int vetor[] = { 8, 3, 15, 1 };
  imprime(vetor, 0, 3);

  printf("\n\nsoma vetor\n");
  printf("= %d", soma_vetor(vetor, 0, 3));

  printf("\n\nmin vetor\n");
  printf("%d", min_vetor(vetor, 0, 3));

  printf("\n\nmax vetor\n");
  printf("%d", max_vetor(vetor, 0, 3));
  
  return 0;
}