#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int vet1[10], vet2[10], vetAux[10];
    int x, i, j, cont, tamanhoVetor, y;
    cont = 0;
    tamanhoVetor = 0;
    y = 0;
    // Zerar o vetor auxiliar
    // for (i = 0; i < 10; i++)
    // {
    //     vetAux[i] = 0;
    // }
    printf("Insira valores para o primeiro vetor:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vet1[i]);
    }
    printf("Insira valores para o segundo vetor:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vet2[i]);
    }
    for (i = 0; i < 10; i++)
    {
        cont = 0;
        for (j = 0; j < 10; j++)
        {
            if (vet1[i] != vet2[j])
            {
                cont++;
            }
        }
        if (cont > 8) // Se o valor nao exister no segundo vetor, entao
        {
            y = 0;
            for (x = 1; i < 10; i++)
            {
                if (vetAux[tamanhoVetor] == vetAux[x])
                {
                    y++;
                }
            }
            if (y == 0)
            {
                vetAux[tamanhoVetor] = vet1[i];
                tamanhoVetor++;
            }
        }
    }
    printf("\n\nVetor 1:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vet1[i]);
    }
    printf("\n\nVetor 2:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vet2[i]);
    }
    printf("\n\nValores existentes no primeiro vetor e nao no segundo:\n");
    for (i = 0; i < tamanhoVetor; i++)
    {
        printf("%d ", vetAux[i]);
    }
    printf("\n");
    return 0;
}