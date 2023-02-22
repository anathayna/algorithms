#include <stdio.h>

int main(void) { 
    int n = 2;                        // tempo
    int i = n;                        //   1
    while (i > 1) {                   //  k+1
        printf("teste");              //   k
        i = i / 2;                    //   k
    }
}

// total:                          3k + 2 = 3 log n + 2

// n = 2, o laço executa 1 vez
// n = 4, o laço executa 2 vezes
// n = 5, o laço executa 2 vezes
// n = 8, o laço executa 3 vezes
// n = 9, o laço executa 3 vezes
// n = 10, o laço executa 3 vezes
// n = 16, o laço executa 4 vezes

// n = 2^k, o laço executa k vezes

// k = log_2 n
// T(n) = 3 log n + 2