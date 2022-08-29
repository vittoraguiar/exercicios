#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Faça um programa que leia uma matriz 3x2 e outra matriz 2x3. Calcule o produto dessas matrizes que deverá ser armazenado em uma terceira matriz. Mostre a matriz resultante.
    int mat1[3][2], mat2[2][3], matResult[2][2];
    int i, j, l, c, numAux;
    l = 0;
    c = 0;
    printf("Insira os numeros da primeira matriz:\n");
    for (i = 0; i < 3; i++) // Matriz 3x2
    {
        for (j = 0; j < 2; j++)
        {
            printf("[%d, %d]: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nInsira os numeros da segunda matriz:\n");
    for (i = 0; i < 2; i++) // Matriz 2x3
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d, %d]: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }
    numAux = 0;
    for (j = 0; j < 3; j++)
    {
        numAux += (mat1[j][0] * mat2[0][j]);
    }
    matResult[l][c] = numAux; // LINHA 0 COLUNA 0
    l++;
    numAux = 0;
    for (j = 0; j < 3; j++) // For responsavel pela matResult[1][0]
    {
        numAux += (mat1[j][0] * mat2[1][j]);
    }
    matResult[l][c] = numAux; // LINHA 1 COLUNA 0
    l = 0;
    c++;
    numAux = 0;
    for (j = 0; j < 3; j++) // For responsavel pela matResult[0][1]
    {
        numAux += (mat1[j][1] * mat2[0][j]);
    }
    matResult[l][c] = numAux; // LINHA 0 COLUNA 1
    l++;
    numAux = 0;
    for (j = 0; j < 3; j++) // For responsavel pela matResult[0][1]
    {
        numAux += (mat1[j][1] * mat2[1][j]);
    }
    matResult[l][c] = numAux;

    printf("\nMatriz 1:\n");
    for (i = 0; i < 3; i++) // Matriz 3x2
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d  ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 2:\n");
    for (i = 0; i < 2; i++) // Matriz 2x3
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ", mat2[i][j]);
        }
        printf("\n");
    }
    printf("\nProduto da matriz:\n");
    for (i = 0; i < 2; i++) // Matriz resultado
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d   ", matResult[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
