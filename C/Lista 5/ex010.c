#include <stdio.h>
#include <stdlib.h>

// Faca um programa que leia 10 numeros double imprimindo cada um deles fazendo o arredondamento PARA CIMA

int main(int argc, char const *argv[])
{
    double num;
    printf("Insira um numero: ");
    scanf("%lf", &num);
    printf("Numero arredondado para CIMA: %.1lf\n", ceil(num));
    return 0;
}