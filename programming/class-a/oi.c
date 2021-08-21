#include <stdio.h>

void oi() {
  printf("oi!\n");
}

void tchau() {
  printf("tchau!\n");
}

int idadeMax() {
  int ano_nasc;
  int idade_max;

  printf("ano de nascimento: ");
  scanf("%d", &ano_nasc);

  idade_max = 2021-ano_nasc;
  return idade_max;
}

int main(void) {
  oi();

  int i;
  for(i=0; i<3; i++)
    oi();
  
  int idade = idadeMax();

  if (idade < 0) {
    printf("osh\n");
    return 1;
  }
  printf("%d a %d anos\n", (idade-1), idade);

  tchau();
  return 0;
}

// build: gcc oi.c -o prog
// run: ./prog