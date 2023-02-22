#include <stdio.h>

int main(void) {
  int n = 2;

  // 1. (a)                             
  int soma_a = 0;                                               
  for(int i = 1; i <= n; i++)           
    for(int j = 1; j <= i; j++)         
      soma_a++;                           
  printf("1. (a) soma %d\n", soma_a);

  // 1. (b)    
  int soma_b = 0;                         
  for(int i = 1; i <= n; i++)           
    for(int j = i; j <= n; j++)         
      for(int k = 1; k <= 100; k++)     
        soma_b++;                         
  printf("1. (b) soma %d\n", soma_b);

  // 1. (c)   
  int soma_c = 0;                          
  for(int i = n/2; i <= n; i++)
    for(int j = i; j <= n/2; j++)
      for(int k = 1; k <= n; k *= 2)
        soma_c++;
  printf("1. (c) soma %d\n", soma_c);

  // 1. (d)
  int soma_d = 0;
  for(int i = n/2; i <= n; i++)
    for(int j = i; j <= n; j *= 2)
      for(int k = 1; k <= n; k *= 2)
        soma_d++;
  printf("1. (d) soma %d\n", soma_d);

  // 1. (e)
  int soma_e = 0;
  for(int i = n*n; i <= n*n*n; i++)
    soma_e++;
  printf("1. (e) soma %d\n", soma_e);

  return 0;
}