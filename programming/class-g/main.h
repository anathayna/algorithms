#include <stdio.h>
 
int busca_linear(int v[], int tamanho, int alvo) {
  for (int i=0; i<tamanho; i++)
    if (v[i] == alvo)
      return i;
  return -1;
}

int busca_binaria(int v[], int tamanho, int alvo) {
  int ini, fim, meio;
  ini = 0;
  fim = tamanho-1;

  while (ini <= fim) {
    meio = (ini+fim)/2;
    if (v[meio] == alvo)
      return meio; 
    else if (v[meio] > alvo)
      fim = meio-1;
    else
      ini = meio+1;
  }

  return -1;
}
