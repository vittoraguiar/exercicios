#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que imprime os primos até um número digitado. */

int main(int argc, char const *argv[])
{
    int num, numAux = 1, resultado;
    printf("Insira um numero: ");
    scanf("%d", &num);
    do
    {
        numAux++;
        resultado = 0;
        for (int i = 2; i <= (numAux / 2); i++)
        {
            if (numAux % i == 0)
            {
                resultado++;
                break;
            }
        }
        if (resultado == 0)
        {
            if (numAux <= num)
            {
                printf("%d ", numAux);
            }
        }
    } while (numAux <= num);
    printf("\n");
    return 0;
}