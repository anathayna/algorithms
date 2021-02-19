#include <stdio.h>

int soma(int a[], int n) {                // custo          tempo
    int resultado = 0, i;                 //  c1              1
        for(i = 0; i < n; i++){           //  c2              n+1
            resultado += a[i];            //  c3              n
        }
        return resultado;                 //  c4              1
}

// T(n) = c1 + c2(n+1) + c3n + c4
// T(n) = (c2 + c3)n + (c1 + c2 + c4)
// T(n) = an + b

// algoritmo linear em n.