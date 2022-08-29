#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Escreva um programa que leia um inteiro, calcule e imprima o quadrado no número lido.
    int num, result;
    printf("Insira um numero para calcular o seu quadrado:\n");
    scanf("%d", &num);
    result = num * num;
    printf("O numero ao quadrado e: %d\n", result);
    return 0;
}
