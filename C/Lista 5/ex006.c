#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Faça um programa que leia dois valores decimais e faça a um OU binário entre os dois. Mostre o resultado em decimal

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    printf("Insira o segundo numero: ");
    scanf("%d", &num2);
    printf("\nNumero 1: ");
    binario(num1);
    printf("\nNumero 2: ");
    binario(num2);
    printf("\nResultado da soma:e%X", (num1 + num2));
    return 0;
}

void binario(int number)
{
    if (number == 0)
        printf("%d", number);
    else
    {
        binario(number / 2);
        printf("%d", number % 2);
    }
}