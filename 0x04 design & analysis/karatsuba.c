/*
fast multiplication algorithm
divide-and-conquer algorithm
reduces the multiplication of 2 n-digit numbers to 3 multiplications of
n/2-digit numbers
*/

#include <math.h>
#include <stdio.h>

int step1(int a, int c) { return a * c; }
int step2(int b, int d) { return b * d; }
int step3(int a, int b, int c, int d) { return (a + b) * (c + d); }

int step4(int a, int b, int c, int d) {
  return step3(a, b, c, d) - step2(b, d) - step1(a, c);
}

int step5(int a, int b, int c, int d) {
  return step1(a, c) * 10000 + step2(b, d) + step4(a, b, c, d) * 100;
}

int main(void) {
  printf("karatsuba multiplication algorithm!\n\n");

  int x = 5678;
  int y = 1234;

  int a = 56;
  int b = 78;
  int c = 12;
  int d = 34;

  int stp1 = step1(a, c);
  int stp2 = step2(b, d);
  int stp3 = step3(a, b, c, d);
  int stp4 = step4(a, b, c, d);
  int stp5 = step5(a, b, c, d);

  printf("step 1: ac -> %d\n", stp1);
  printf("step 2: bd -> %d\n", stp2);
  printf("step 3: (a+b)(c+d) -> %d\n", stp3);
  printf("step 4: step 3 - step 2 - step 1 -> %d\n", stp4);
  printf("step 5: step 1 + step 2 + step 4 -> %d\n", stp5);

  return 0;
}
