#include <stdio.h>
#include <stdlib.h>

/*
 * Escreva um programa que imprima na tela o fatorial de um programa recebido
 */

int main(int argc, char const *argv[])
{
    int num, fat;
    printf("Insira um numero: ");
    scanf("%d", &num);
    for (fat = 1; num > 1; num = num - 1)
    {
        fat = fat * num;
    }
    printf("O fatorial do numero inserido eh %d\n", fat);
    return 0;
}