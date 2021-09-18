#include <stdio.h>

void exemplo(unsigned n) {
  if (n <= 10) {
    printf("fez %d chamadas\n", n);
    exemplo(n+1);
  }
  else {
    printf("oba, terminei\n");
  }
  printf("meu valor de n é %d\n", n);
}

void contagem_regressiva(unsigned n) {
  // while(n) {
  //   printf("%d...\n", n);
  //   n -= 1;
  // }

  // for(int i=n; i>=0; i--)
  //   printf("%d...\n", i);

  printf("%d...\n", n);
  if (n > 0) 
    contagem_regressiva(n-1);
}

unsigned soma(unsigned n) {
  printf("%d + ", n);
  if (n == 0)
    return 0;
  else
    return n + soma(n-1);
}

void imprime(int vetor[], int inicio, int fim) {
  printf("%d ", vetor[inicio]);
  if (inicio < fim)
    imprime(vetor, inicio+1, fim);
}

int soma_vetor(int vetor[], int inicio, int fim) {
  printf("%d + ", vetor[inicio]);
  if (inicio==fim) {
    return vetor[inicio];
  } else {
    int soma_parcial = soma_vetor(vetor, inicio+1, fim);
    return vetor[inicio] + soma_parcial;
  }
}

int min_vetor(int vetor[], int inicio, int fim) {
  if (inicio==fim) {
    return vetor[inicio];
  } else {
    int aux1 = vetor[inicio];
    int aux2 = min_vetor(vetor, inicio+1, fim);
    if (aux1 < aux2)
      return aux1;
    else
      return aux2;
  }
}

int max_vetor(int vetor[], int inicio, int fim) {
  if (inicio==fim) {
    return vetor[inicio];
  } else {
    int max_aux = max_vetor(vetor, inicio+1, fim);
    if (max_aux > vetor[inicio])
      return max_aux;
    else
      return vetor[inicio];
  }
}
