#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Maior(char palavra1[20], char palavra2[20])
{
    int comp1 = 0, comp2 = 0;
    comp1 = strlen(palavra1);
    comp2 = strlen(palavra2);
    if (comp1 > comp2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    char palavra1[20], palavra2[20];
    int condicao;
    gets(palavra1);
    gets(palavra2);
    condicao = Maior(palavra1, palavra2);
    switch (condicao)
    {
    case 0:
        printf("A palavra 1 é maior!");
        printf("\nPalavra: ");
        puts(palavra1);
        break;
    case 1:
        printf("A palavra 2 é maior!");
        printf("\nPalavra: ");
        puts(palavra2);
        break;
    }
    return 0;
}