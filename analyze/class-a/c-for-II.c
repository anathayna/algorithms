#include <stdio.h>

int main(void) { 
    int n = 4;
    for (int i = 0; i*i < n; i++){        
        printf("teste %d\n", i);
    }
}

// n = 4, o laço executa 2 vezes
// n = 8, o laço executa 3 vezes
// n = 16, o laço executa 4 vezes

// quando i*i >= n, o laço pára
// quando i = raiz_quadrada(n), o laço pára
