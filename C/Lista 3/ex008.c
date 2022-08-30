#include <stdio.h>
#include <stdlib.h>

/*
 * Entrar com nome, idade e sexo de 5 pessoas, e imprimir na tela o nome dos homens maiores de 21 anos.
 */

int main(int argc, char const *argv[])
{
    int age[5], x = 0;
    char sexo[5][1];
    char nome[5][21], nomesImprimir[5][21];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome da %da pessoa: ", i + 1);
        fflush(stdin);
        gets(&nome[i]);
        printf("Digite A idade da %da pessoa: ", i + 1);
        scanf("%d", &age[i]);
        if ((sexo[i] == 'M' || sexo[i] == 'm') && age[i] > 21)
        {
            nomesImprimir[x] = nome[i];
            x++; 
        }
        
    }
    



    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome: ");
        fflush(stdin);
        gets(&nome);
        printf("Digite o sexo: ");
        scanf("%c ", &sexo);
        printf("")
    }

    return 0;
}