#include <stdio.h>
#include <stdlib.h>

// Faca um programa que aloque dinamicamente um array de inteiros com tamanho fornecido pelo usuario.
// A seguir leia valores para esse array. A seguir percorra o array contando quantos elementos positivos e negativos foram informados

int main(int argc, char const *argv[])
{
    int *v, tam, neg = 0, pos = 0;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tam);

    v = (int *)malloc(tam * sizeof(int));

    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &v[i]);
        v[i] >= 0 ? pos++ : neg++;
    }
    if (pos > 0)
    {
        printf("\nPositivos:");
        printf("%d ", pos);
    }
    if (neg > 0)
    {
        printf("\nNegativos:");
        printf("%d ", neg);
    }
    free(v);
    return 0;
}