#include <stdio.h>

int main(void) { 
    int i = 1;
    int k = 0;
    int n = 4;
    while (k < n) {
        printf("teste");
        k = k + i;
        i = i + 1;
    }
}

//     i                    k        
//     1                    0
//     2                    0+1 = 1
//     3                    0+1+2 = 3
//     4                    0+1+2+3 = 6
//     5                    0+1+2+3+4 = 10
//     6                    0+1+2+3+4+5 = 15
//     ....
//     m                    0+1+2+ ... + m >= n pára
     
//     (0+m)(m+1)/2 = m(m+1)/2     =>   
//     *** soma de PA = (a1 + an)n / 2 ***

//     quando k = m(m+1)/2 >= n o laço pára

//     ~ m^2/2 >= n
//     = m^2 >= 2n
//     = m >= raiz_quadrada(2n)
//     = m >= raiz_quadrada(n)
     
//     T(n) = raiz_quadrada(n)
