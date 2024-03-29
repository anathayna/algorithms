/*
fast multiplication algorithm
divide-and-conquer algorithm
reduces the multiplication of 2 n-digit numbers to 3 multiplications of n/2-digit numbers
*/

#include "karatsuba_learning.h"
#include "karatsuba_algorithm.h"

int main(void) {
  printf("karatsuba multiplication algorithm!\n\n");

  thelearningway();
  thealgorithmway();

  return 0;
}

// build: gcc karatsuba.c -o karatsuba
// run: ./karatsuba