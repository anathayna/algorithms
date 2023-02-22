#include <omp.h> 
#include <stdio.h> 
#include <stdlib.h> 
  
int main(int argc, char* argv[]) {  
  #pragma omp parallel 
  { 
    printf("Hello World... from thread = %d\n", 
    omp_get_thread_num()); 
    //printf("Hello World...\n"); 
  } 
}

//!cd drive/MyDrive/Colab\ Notebook/ && gcc openmp.c -fopenmp && ./a.out
//!cd drive/MyDrive/Colab\ Notebook/ && mpicc -o openmp openmp.c && mpirun --allow-run-as-root -np 32 openmp