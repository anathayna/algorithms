#include <stdlib.h>
#include <stdio.h>
#include <omp.h>
  
int main(int argc, char* argv[]) { 
  int x, p, r, m;
  int v[] = {3,6,8,5,4,1};
  #pragma omp parallel 
  { 
    while (p <= r) { 
       m = (p + r)/2;
       if (x == v[m]) {
           return m;
       }
       if (x < v[m]) {
           r = m - 1; 
       }
       else {
           p = m + 1;
       } 
    }
  } 
  return 0;
}

//!cd drive/MyDrive/Colab\ Notebook/ && gcc binary-tree.c -fopenmp && ./a.out