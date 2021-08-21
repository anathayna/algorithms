#include <stdio.h>

int main(void) {
    // float v[] = {23.7, 24.1, 24.9, 25.7, 27.3, 25.1, 19.0};

    int i, n;
    float v[100];

    printf("escolha o tamanho do vetor (até 100)\n");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("meu programa não lida com esse tamanho de entrada! adeus.\n");
        return 1;
    }

    printf("digite %d valores.\n", n);
    for (i = 0; i < n; i++)
        scanf("%f", &v[i]);

    printf("\nvetor \n");

    for (i = 0; i < n; i++)
        printf("%.1f \n", v[i]);
    
    printf("\ninverso \n");

    for (i = n-1; i >= 0; i--)
        printf("%.1f \n", v[i]);
        //printf("%.1f ", v[n-1-i]);

    printf("\nmedia \n");

    float media = 0.0;
    for (i = 0; i < n; i++)
        media += v[i]/7;
    printf("%.2f \n", media);
    
    printf("\nmínimo \n");

    float minimo = v[0];
    for (i = 1; i < n; i++)
        if (v[i] < minimo)
            minimo = v[i];
    printf("%.1f \n", minimo);

    printf("\nmáximo \n");

    float maximo = v[0];
    for (i = 1; i < n; i++)
        if (v[i] > maximo)
            maximo = v[i];
    printf("%.1f \n", maximo);

    return 0;
}

// build: gcc temperature.c -o t
// run: ./t