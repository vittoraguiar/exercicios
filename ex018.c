#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3, media, numMaior, numMeio, numMenor, criterio;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num1);
    printf("\nInsira outro numero inteiro: ");
    scanf("%d", &num2);
    printf("\nInsira outro numero inteiro: ");
    scanf("%d", &num3);

    media = (num1 + num2 + num3) / 3;

    if (num1 > num2 && num2 > num3)
    {
        numMaior = num1;
        numMeio = num2;
        numMenor = num3;
        if (numMeio > media)
        {
            criterio = 1;
        }
        else if (numMeio == media)
        {
            criterio = 2;
        }
        else if (numMeio < media)
        {
            criterio = 0;
        }
    }
    else if (num1 > num3 && num3 > num2)
    {
        numMaior = num1;
        numMeio = num3;
        numMenor = num2;
        if (numMeio > media)
        {
            criterio = 1;
        }
        else if (numMeio == media)
        {
            criterio = 2;
        }
        else if (numMeio < media)
        {
            criterio = 0;
        }
    }
    else if (num2 > num1 && num1 > num3)
    {
        numMaior = num2;
        numMeio = num1;
        numMenor = num3;
        if (numMeio > media)
        {
            criterio = 1;
        }
        else if (numMeio == media)
        {
            criterio = 2;
        }
        else if (numMeio < media)
        {
            criterio = 0;
        }
    }
    else if (num2 > num3 && num3 > num1)
    {
        numMaior = num2;
        numMeio = num3;
        numMenor = num1;
        if (numMeio > media)
        {
            criterio = 1;
        }
        else if (numMeio == media)
        {
            criterio = 2;
        }
        else if (numMeio < media)
        {
            criterio = 0;
        }
    }
    else if (num3 > num1 && num1 > num2)
    {
        numMaior = num3;
        numMeio = num1;
        numMenor = num2;
        if (numMeio > media)
        {
            criterio = 1;
        }
        else if (numMeio == media)
        {
            criterio = 2;
        }
        else if (numMeio < media)
        {
            criterio = 0;
        }
    }
    else if (num3 > num2 && num2 > num1)
    {
        numMaior = num3;
        numMeio = num2;
        numMenor = num1;
        if (numMeio > media)
        {
            criterio = 1;
        }
        else if (numMeio == media)
        {
            criterio = 2;
        }
        else if (numMeio < media)
        {
            criterio = 0;
        }
    }

    if (criterio == 1)
    {
        printf("\nMaior %d\nMeio: %d\nMenor: %d\nA media: %d\n", numMaior, numMeio, numMenor, media);
        printf("\nO numero do meio eh maior que a media.\n");
    }
    else if (criterio == 0)
    {
        printf("\nMaior: %d\nMeio: %d\nMenor: %d\nA media: %d\n", numMaior, numMeio, numMenor, media);
        printf("\nO numero do meio eh menor que a media.\n");
    }
    else if (criterio == 2)
    {
        printf("\nMaior: %d\nMeio: %d\nMenor: %d\nA media: %d\n", numMaior, numMeio, numMenor, media);
        printf("\n.O numero do meio eh igual a media.\n");
    }
    return 0;
}