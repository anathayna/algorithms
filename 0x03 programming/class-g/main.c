#include <stdio.h>
#include "main.h"

int main(void) {
  //int v[] = { 2, 3, 4, 10, 40 };
  int v[100], i, res;
  for (i = 0; i < 100; i++)
      v[i] = i+1;
  
  printf("\n=== busca linear ===\n");
  res = busca_linear(v, 100, 67);
  printf("a wild -> %d <- appears\n", res);

  printf("\n=== busca binária ===\n");
  res = busca_binaria(v, 100, 67);
  printf("a wild -> %d <- appears\n", res);

  return 0;
}

// build: gcc main.c -o main
// run: ./main