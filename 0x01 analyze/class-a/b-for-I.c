#include <stdio.h>

void x(int **a, int n) {                  // custo          tempo
    for(int i=0; i<n; i++)                //  c1             n+1
        for(int j=0; j<n; j++)            //  c2           ((n+1)n)/2
            swipe(&a[i][j], &a[j][i]);    //  c3           ((n+1)n)/2-1
}

// T(n) = c1(n+1) + c2(((n+1)n)/2) + c3(((n+1)n)/2-1)
// T(n) = c1n + c1 + c2n^2/2 + c2n/2 + c3n^2/2 + c3n/2 + c3
// T(n) = (c2n^2/2 + c3n/2) + (c1n + c2n/2 + c3n/2) + (c1 + c3)
// T(n) = (c1 + c3)/2n^2 + (c1 + c2/2 + c3/2)n + (c1 - c3)
// T(n) = an^2 + bn + c

// algoritmo quadrático em n.