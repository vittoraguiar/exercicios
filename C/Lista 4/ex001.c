#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia um vetor com 10 elementos positivos e/ou negativos e no final diga quantos elementos negativos e quantos positivos foram encontrados */

int main(int argc, char const *argv[])
{
    int numPos = 0, numNeg = 0, vetor[10];
    printf("Insira 10 valores para preencher o vetor:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
        if (vetor[i] >= 0)
        {
            numPos++;
        }
        else
        {
            numNeg++;
        }
    }
    if (numPos != 0)
    {
        printf("\nExistem %d valores positivos no vetor.\n", numPos);
    }
    else if (numPos == 0)
    {
        printf("\nNão existem valores positivos no vetor.\n");
    }
    if (numNeg != 0)
    {
        printf("\nExistem %d valores negativos no vetor.\n", numNeg);
    }
    else if (numNeg == 0)
    {
        printf("\nNão existem valores negativos no vetor.\n");
    }
    return 0;
}