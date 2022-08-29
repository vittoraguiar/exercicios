#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Faça um programa que leia uma matriz 5 x 5. Diga se essa matriz é uma matriz identidade.
    int matriz[5][5];
    int i, j, cont, numAux, limite;
    cont = 0;
    numAux = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Elemento %d, %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    // Validacao da matriz indentidade
    numAux = matriz[0][0];
    i = 1;
    j = 1;
    for (limite = 1; limite < 6; limite++)
    {
        if (numAux = matriz[i][j])
        {
            cont++;
        }
        else if (numAux != matriz[i][j])
        {
            break;
        }
        i++;
        j++;
    }
    printf("\nMatriz inserida:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d      ", matriz[i][j]);
        }
        printf("\n");
    }
    if (cont < 5)
    {
        printf("\nNao eh uma matriz identidade...");
    }
    else
    {
        printf("\nA matriz inserida eh uma matriz identidade!");
    }
    printf("\n");
    return 0;
}