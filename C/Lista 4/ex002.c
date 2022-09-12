#include <stdio.h>
#include <stdlib.h>

/*
 * Escreva um programa que leia dois vetores ordenados, v1 e v2 com 10 elementos cada,
 * retorne um novo array ordenado contendo os elementos de v1 e v2.
 * Exemplo:
 * arr1:  [3, 4, 6, 7]
 * arr2:  [1, 3, 5, 6, 8, 11, 15]
 * var res = uniao(arr1, arr2); // res=[1, 3, 3, 4, 5, 6, 6, 7, 8, 11, 15]
 */

int main(int argc, char const *argv[])
{
    int v1[10], v2[10], res[20], j = 10, aux = 0;
    printf("Insira 10 números para o vetor 1:\n"); // Leitura do vetor 1
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &v1[i]);
    }
    printf("Insira 10 números para o vetor 2:\n"); // Leitura do vetor 2
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &v2[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        res[i] = v1[i];
    }
    for (int i = 0; i < 10; i++)
    {
        res[j] = v2[i];
        j++;
    }
    // Ordenação Bubble sort
    for (int i = 0; i < 20; i++)
    {
        for (int j = (i + 1); j < 20; j++) // 1 elemento a frente
        {
            // Se o i for menor que a próxima posição do vetor, o i passa pra frente (ordem decrescente)
            if (res[i] < res[j])
            {
                aux = res[j]; // Recebe o menor
                res[j] = res[i];
                res[j] = aux;
            }
        }
    } // fim da ordenação

    printf("Vetor resultado:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", res[i]);
    }
    printf("\n");
    return 0;
}