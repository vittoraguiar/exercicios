#include <stdio.h>
#include <stdlib.h>

/*
 * Escreva um programa que leia de forma repetitiva um dado um número positivo, e diga se ele é primo ou não.
 * O programa deve parar quano o usuário digitar o número -1.
 */

int main(int argc, char const *argv[])
{
    int num, i, resultado;
    resultado = 0;
    printf("Insira numeros para verificar se os mesmos sao primos ou nao.");
    printf("Para parar a execucao do programa digite -1");
    do
    {
        resultado = 0;
        printf("\nInsira um numero: ");
        scanf("%d", &num);
        if (num == -1)
        {
            printf("Programa Encerrado!");
            break;
        }
        for (i = 2; i <= (num / 2); i++)
        {
            if (num % i == 0)
            {
                resultado++;
                break;
            }
        }
        if (resultado == 0)
            printf("%d eh um numero primo\n", num);
        else
            printf("%d NAO eh um numero primo\n", num);
    } while (num != -1);
    return 0;
}