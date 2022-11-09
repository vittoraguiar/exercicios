#include <stdio.h>
#include <stdlib.h>

// Criar uma função que receba como parâmetro o ano e retorne 1 se ele for bissexto e 0 se não for bissexto.

int CalculaAnoBissexto (int ano) {
    if (ano % 4 == 0 && ano % 100 != 0)
        return 1;
    else
        return 0; 
}

int main(int argc, char const *argv[])
{
    int ano;
    printf("Insira o ano: ");
    scanf("%d", &ano);
    if (CalculaAnoBissexto(ano))
        printf("O ano eh bissexto!");
    else
        printf("O ano NAO eh bissexto!");
    return 0;
}