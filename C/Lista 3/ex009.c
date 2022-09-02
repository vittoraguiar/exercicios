#include <stdio.h>
#include <stdlib.h>

/* Entrar com 15 números e imprimir quantos números maiores que 30 foram digitados */

int main()
{
    int number[15], count = 0;
    for (int i = 0; i < 15; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", &number[i]);
    }
    for (int i = 0; i < 15; i++)
    {
        if (number[i] > 30)
            count++;
    }
    if (count > 0)
    {
        printf("Quantidade de numeros maiores que 30: %d", count);
    }
    else
        printf("Nao existem numeros maiores que 30");
    printf("\n");
    return 0;
}