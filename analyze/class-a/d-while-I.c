#include <stdio.h>

void func(int a, int b) {       // custo          tempo
    int a=1;                    //  c1              1
    while(a<b) {                //  c2             k+1
        printf("teste");        //  c3              k
        a = a*2;                //  c3              k
    }
}

// a
// a = 1
// a = 1 * 2 = 2 = 2^1
// a = 2 * 2 = 4 = 2^2
// a = 4 * 2 = 8 = 2^3
// a = 8 * 2 = 16 = 2^4
// ...

// vai executar k vezes
// quando a = 2^k o algoritmo pára

// a = b
// 2^k = b
// k = log_2 b

//O(log n)
