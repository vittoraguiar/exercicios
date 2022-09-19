#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que some dois valores fornecidos pelo usuário e mostre o resultado com 10 posições alinhadas a esquerda

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    printf("Insira o segundo numero: ");
    scanf("%d", &num2);
    printf("Resultado: [%10d]\n", (num1 + num2));
    return 0;
}