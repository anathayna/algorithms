#include <stdio.h>

void ex1() {
  int i, v[100];

  printf("digite 3 valores inteiros:\n");
    for (i = 0; i < 3; i++)
      scanf("%d", &v[i]);

  printf("\nmaior \n");

  float maximo = v[0];
  for (i = 1; i < 3; i++)
    if (v[i] > maximo)
      maximo = v[i];
  printf("%.1f \n", maximo);

  printf("menor \n");

  float minimo = v[0];
  for (i = 1; i < 3; i++)
    if (v[i] < minimo)
        minimo = v[i];
  printf("%.1f \n", minimo);

  printf("média \n");

  float media = 0.0;
  float soma = 0.0;
  for (i = 0; i < 3; i++)
      soma += v[i];
  media = (float) soma/3;
  printf("%.2f \n", media);
}

void ex2() {
  int i, x[100];

  printf("digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++)
      scanf("%d", &x[i]);

  printf("\nmaior \n");

  float max = x[0];
  for (i = 1; i < 10; i++)
    if (x[i] > max)
      max = x[i];
  printf("%.1f \n", max);

  printf("menor \n");

  float min = x[0];
  for (i = 1; i < 10; i++)
    if (x[i] < min)
        min = x[i];
  printf("%.1f \n", min);

  printf("média \n");

  float med = 0.0, soma = 0.0;
  for (i = 0; i < 10; i++)
    soma += x[i];
  med = (float) soma/10;
  printf("%.2f \n", med);
}

double media(int a, int b, int c) {
  double media = 0;
  media = (a+b+c)/3;
  return media;
}

double media_vetor(int valores[], int tamanho) {
  double media = 0.0, soma = 0.0;

  for (int i = 0; i < tamanho; i++)
    soma += valores[i];
  media = (double) soma/tamanho;

  return media;
}

int ex5(int valores[], int tamanho) {
  int maximo = valores[0];
  for (int i = 1; i < tamanho; i++)
    if (valores[i] > maximo)
      maximo = valores[i];

  return maximo;
}

int ex6(int v[], int n) {
  int min = v[0];
  for (int i = 1; i < n; i++)
    if (v[i] < min)
      min = v[i];

  return min;
}

void zera_matriz(int matriz[], int linhas, int colunas) {

}

unsigned sequencia(unsigned n) {
  while (n>1) {
    printf("%d -> ", n);
    if (n%2==0) {
      n = n/2;
    } else {
      n = n*3+1;
    }
  }
  printf("1");
}

unsigned passos(unsigned n) {
  int aux;
  while (n>1) {
    if (n%2==0) {
      n = n/2;
    } else {
      n = n*3+1;
    }
    aux+=1;
  }
  return aux;
}
