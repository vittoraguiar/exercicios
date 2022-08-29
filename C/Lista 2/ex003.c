#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Faça um programa que leia 2 números do teclado e imprima a soma deles e se a mesma é par ou impar.
    int num1, num2, result, criterio;
    printf("Insira dois numeros inteiros:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    result = num1 + num2;
    if ((result % 2) == 0)
    {
        printf("\nO resultado da soma dos numeros eh par. (%d)\n", result);
    }
    else
        printf("\nO resultado da soma eh impar (%d).\n", result);
    return 0;
}
