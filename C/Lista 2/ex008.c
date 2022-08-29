#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Faça um programa que leia 3 números inteiros e imprima qual deles é o maior e qual é o menor. Além de dizer se o do meio é maior, menor ou igual a média dos 3
    int vet[3], aux, media, i, j;
    aux = 0;
    media = 0;
    j = 0;	
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &vet[i]);
        media += vet[i];
    }
    i = 1;
    for (j = 0; j < 3; j++)
    {
        aux = vet[i];
        if (vet[j] < aux)
        {
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = j;
        }
        i++;
        if (i = 3)
        {
            j++;
            i = 0;
        }
    }
    printf("Maior elemento: %d. \nMenor elemento: %d.\n", vet[2], vet[0]);
    media /= 3;
    if (vet[1] > media)
    {
        printf("O numero do meio eh maior que a media");
    }
    else if (vet[1] < media)
    {
        printf("O numero do meio eh menor que a media");
    }
    else
        printf("O numero do meio eh igual a media");
    return 0;
}