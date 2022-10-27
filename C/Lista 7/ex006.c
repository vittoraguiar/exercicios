#include <stdio.h>
#include <stdlib.h>

/*
Faca um programa que leia duas strings fornecidas pelo usuario de no maximo 50 posicoes. 
A seguir aloque dinamicamente uma outra string (array de caracteres) com tamanho suficiente para 
armazenar as duas strings lidas previamente. Copie o conteudo dessas duas strings para esse espaco alocado dinamicamente.
*/

int main(int argc, char const *argv[])
{
    char palavra1[50], palavra2[50], *p3, tam = 0, i, j;

    printf("Insira a primeira string:\n");
    fgets(palavra1, 50, stdin);
    printf("Insira a segunda string:\n");
    fgets(palavra2, 50, stdin);

    for (i = 0; palavra1[i] != "\0"; i++)
    {
        tam++;
    }
    for (i = 0; palavra2[i] != "\0"; i++)
    {
        tam++;
    }

    p3 = (char *)malloc(tam * sizeof(char));
    for (i = 0; palavra1[i] != "\0"; i++)
    {
        p3[i] = palavra1[i];
    }
    j = i;
    for (i = 0; palavra2[i] != "\0"; i++, j++)
    {
        p3[j] = palavra2[i];
    }
    for (int i = 0; i < tam; i++)
    {
        printf("%c", p3);
    }
    
    puts(p3);
    free(p3);
    return 0;
}