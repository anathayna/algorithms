#include <stdio.h>
#include "main.h"

int main(void) {
  unsigned valor;
  printf("insira um valor inteiro: ");
  scanf("%u", &valor);
  printf("%u! = %lu\n", valor, fat_rec(valor));
  printf("\npitagoras\n");
  printf("%.1f\n", pitagoras(3, 4));
  /*
    3*3 + 4*4 = 25
    sqrt(25) = 5.0
  */
  return 0;
}
