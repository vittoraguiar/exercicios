#include <stdio.h>
#include <stdlib.h>

/* Criar um programa que leia 20 valores inteiros e imprima o produto dos ímpares e a soma dos pares */

int main()
{
    int number[20], produto = 1, soma = 0;
    for (int i = 0; i < 20; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", &number[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        if (number[i] % 2 == 0)
        {
            soma += number[i];
        }
        else
        {
            produto *= number[i];
        }
    }
    printf("\nProduto dos numeros impares: %d", produto);
    printf("\nSoma dos numeros pares: %d\n", soma);
    return 0;
}