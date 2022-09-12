#include <stdio.h>
#include <stdlib.h>

// Seja R uma matriz  4 X5. Determine o maior elemento de R e a sua posição.

int main(int argc, char const *argv[])
{
    int R[4][5], pos1, pos2, maior = 0;
    printf("Insira os numeros para preencher a matriz:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("[%d, %d]: ", i, j);
            scanf("%d", &R[i][j]);
            if (R[i][j] > maior)
            {
                maior = R[i][j];
                pos1 = i;
                pos2 = j;
            }
        }
    }
    printf("\nO maior numero eh: %d", maior);
    printf("\nSua posicao eh: [%d, %d].\n", pos1, pos2);
    return 0;
}