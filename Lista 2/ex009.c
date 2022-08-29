#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Escreva um programa que leia a altura e o raio de um cilindro circular e imprima o volume do mesmoS
    float volume, pi, raio, altura;
    volume = 0.0;
    pi = 3,14;
    raio = 0.0;
    altura = 0.0;
    printf("Insira a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Insira o raio do cilindro: ");
    scanf("%f", &raio);
    volume = pi * (raio * raio) * altura;
    printf("\nO volume do cilindro eh de %.1f\n", volume);
    return 0;
}
