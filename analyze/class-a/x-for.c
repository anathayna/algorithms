#include <stdio.h>

int main(void) { 
    int n = 4;
    for (int i = 0; i*i < n; i++){        
        printf("teste");
    }
}

// n = 4, o laço executa 2 vezes
// n = 8, o laço executa 3 vezes
// n = 16, o laço executa 4 vezes

// quando o laço pára ?  quando i*i >= n

// i*i = n

// qual é o valor de i quando o laço pára ?
// i = raiz_quadrada(n)