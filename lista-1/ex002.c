#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Faça um programa que leia um nº inteiro e mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo ou negativo.
    int number;
    printf("Please insert a number: ");
    scanf("%d", &number);
    // Calcular se o numero é par ou ímpar
    if ((number % 2) == 0)
    {
        printf("Number is even.");
    }
    else
        printf("Number is odd.");
    if (number >= 0)
    {
        printf("\nNumber is positive.");
    }
    else
        printf("\nNumber is negative.");
    printf("\n");
    return 0;
}
