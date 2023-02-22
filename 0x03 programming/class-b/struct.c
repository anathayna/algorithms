#include <stdio.h>

int main() {
    struct {
        int idade;
        float altura;
        float temperatura;
    } paciente;

    paciente.altura = 1.70;
    paciente.idade = 25;
    paciente.temperatura = 36.9; 

    printf("idade: %d\n", paciente.idade);
    printf("altura: %.2f\n", paciente.altura);
    printf("temperatura: %.1f\n", paciente.temperatura);

    return 0;
}

// build: gcc struct.c -o s
// run: ./s