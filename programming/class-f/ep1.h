#include <stdio.h>

/*

função/sequência/conjectra collatz

      N/2 (N par)
    /
f(N)
    \
      3 * N + 1 (N ímpar)

*/

// parte 1
void sequencia(unsigned n) {
  printf("%d -> ", n);
  if (n==1)
    exit(0);
  if (n%2==0) {
    sequencia(n/2);
  } else {
    sequencia(n*3+1);
  }
}

// parte 2
unsigned passos(unsigned n) {
  int aux;
  if (n==1)
    return aux+1;
  if (n%2==0) {
    aux = passos(n/2) +1;    
  } else {
    aux = passos(n*3+1) +1;
  }
  return aux;
}
