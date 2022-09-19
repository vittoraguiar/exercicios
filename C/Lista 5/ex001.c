#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia dois números em ponto flutuante e forneça o resultado da soma formatado com duas casas decimais */

int main(int argc, char const *argv[])
{
    double num1, num2, soma;
    printf("Insira o primeiro numero: ");
    scanf("%lf", &num1);
    printf("Insira o segundo numero: ");
    scanf("%lf", &num2);
    soma = num1 + num2;
    printf("O resultado da soma eh: %.2lf", soma);
    return 0;
}