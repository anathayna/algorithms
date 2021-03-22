#include <stdlib.h>
#include <stdio.h>
#include <omp.h>
  
int main(int argc, char* argv[]) { 
  int v[] = {3,6,8,5,4,1};
  int x, p, r, maior;

  if (argc != 2) {
		printf("error\n");
		exit(0);
  }

  #pragma omp parallel shared (maior)
  { 
    int aux_maior;

    while (p <= r) { 
       maior = (p + r)/2;
       if (x == v[maior]) {
          maior = aux_maior;
       }
       if (x < v[maior]) {
           r = maior - 1; 
       }
       else {
           p = maior + 1;
       } 
    }
  } 
  printf("%d\n", maior);
  return 0;
}

//!cd drive/MyDrive/Colab\ Notebook/ && gcc binary-tree.c -fopenmp && ./a.out