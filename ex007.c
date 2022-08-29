#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Faça um programa que leia 2 vetores de inteiros de 10 posicoes cada. A seguir copie os valores de ambos os vetores para um terceiro vetor. Mostre o vetor resultante.
    int vet1[10], vet2[10], vet3[20], i;
    printf("Please insert numbers for the first array:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vet1[i]);
    }
    printf("Please insert numbers for the second array:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vet2[i]);
    }
    for (i = 0; i < 10; i++)
    {
        vet3[i] = vet1[i];
    }
    for (i = 0; i < 10; i++)
    {
        vet3[10+i] = vet2[i];
    }
    printf("First array: \n");
    for (i = 0; i < 10; i++)
    {
        printf(vet1[i]);
    }
    printf("Second array: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d", vet2[i]);
    }
    printf("Third array: \n");
    for (i = 0; i < 20; i++)
    {
        printf("%d", vet3[i]);
    }
    printf("\n");
    return 0;
}