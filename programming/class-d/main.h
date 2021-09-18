#include <stdio.h>
#include <math.h>

unsigned long fatorial(unsigned N) {
  unsigned long resultado = 1;

  while (N >= 2) {
    resultado = resultado*N;
    N = N-1;
  }

  return resultado;
}

unsigned long fatorial_roubado(unsigned N) {
  return fatorial(N-1)*N;
}

unsigned long fat_rec(unsigned N) {
  if (N == 1)
    return 1;
  else
    return fat_rec(N-1)*N;
}

int fat(int N) {
  int fatorial = 1;
  for (int i=1; i<=N; i++)
    fatorial *= i;
  return fatorial;
}

// int fatorial(int N) {
//   int fatorial = 1;
//   while(N >= 2) {
//     fatorial *= N;
//     N -= 1;
//   }
//   return fatorial;
// }

float pitagoras(float a, float b) {
  return sqrt(a*a + b*b);
}

// build: gcc exercicios.c -o main
// run: ./main