#include <stdio.h>
#include <stdlib.h>

// Crie uma funcao que receba dois parametros inteiros e retorne a seguinte estrutura com os respectivos valores definidos

typedef struct
{
    int x;
    int y;
} Estrutura;

Estrutura Retorna(int x, int y)
{
    Estrutura estrut;
    estrut.x = x;
    estrut.y = y;
    return estrut;
}

int main()
{
    Estrutura estrut;
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    estrut = Retorna(x, y);
    printf("%d", estrut.x);
    printf("%d", estrut.y);
    return 0;
}