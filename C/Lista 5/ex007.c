#include <stdio.h>
#include <stdlib.h>

// Faça um programa que leia um número e mostre a multiplicação e divisão desse número por dois (utilize os operadores de deslocamento de bits)

int main(int argc, char const *argv[])
{
    float number;
    printf("Digite um numero: ");
    scanf("%f", &number);
    printf("\n%.1f / 2 = %.1f", number, (number / 2));
    printf("\n%.1f * 2 = %.1f\n", number, (number * 2));
    return 0;
}