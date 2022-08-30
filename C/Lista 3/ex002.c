#include <stdio.h>
#include <stdlib.h>

/*
 * Escreva um programa que dados 15 números, imprima seus quadrados, obs: você não precisa necessariamente imprimir no final.
 */

// Declaracao da constante
#define tam 3

int main(int argc, char const *argv[])
{
    int num;
    for (int i = 0; i < tam; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        printf("O quadrado do numero eh %d\n\n", (num * num));
    }
    return 0;
}