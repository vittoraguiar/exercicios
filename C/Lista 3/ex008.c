#include <stdio.h>
#include <stdlib.h>

/*
 * Entrar com nome, idade e sexo de 5 pessoas, e imprimir na tela o nome dos homens maiores de 21 anos.
 */

int main(int argc, char const *argv[])
{
    int age[3], x = 0;
    char sexo[3][1];
    char nome[3][21], homens21[3][21];

    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite o nome da %da pessoa: ", i + 1);
        fflush(stdin);
        gets(&nome[i]);
        printf("Digite a idade da %da pessoa: ", i + 1);
        scanf("%d", &age[i]);
        printf("Digite o sexo da %da pessoa: ", i + 1);
        scanf("%c ", &sexo[i]);
        if ((sexo[i] == 'M' || sexo[i] == 'm') && age[i] > 21)
        {
            homens21[x][0] = nome[i];
            x++;
        }
    }

    printf("nomes:");
    for (int i = 0; i <= x; i++)
    {
        printf("%s", homens21[i]);
    }

    return 0;
}