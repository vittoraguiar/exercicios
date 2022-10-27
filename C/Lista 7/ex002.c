#include <stdio.h>
#include <stdlib.h>

/*
 * Elabore um programa que armazene valores aleatórios em um vetor de inteiros de 10 posições.
 * A seguir aloque dinamicamente um segundo vetor de inteiros como o tamanho de acordo com o total de numeros pares do primeiro vetor.
 * Preencha-o com os numeros pares existentes no primeiro vetor.
 */

int main(int argc, char const *argv[])
{
    int *v, *v2, tam, pares = 0;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tam);

    v = (int *)malloc(tam * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        v[i] = rand() % 10;
        if (v[i] % 2 == 0)
        {
            pares++;
        }
    }
    v2 = (int *)malloc(pares * sizeof(int));
    
    for (int i = 0, y = 0; i < 10; i++)
    {
        if (v[i] % 2 == 0)
        {
            v2[y] = v[i];
            y++;
        }
    }
    printf("Vetor 1:\n");
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\nVetor 2:\n");
    for (int i = 0; i < pares; i++)
    {
        printf("%d ", v2[i]);
    }
    free(v);
    free(v2);
    return 0;
}