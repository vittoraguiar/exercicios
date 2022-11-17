#include <stdio.h>
#include <stdlib.h>

// Escreva uma funcao que receba dois inteiros e armazene-os em uma estrutura (campos x e y).
// A seguir copie essa estrutura para uma segunda estutura. Mostre essa segunda estrutura

typedef struct
{
    int x;
    int y;
} Campos;

int Ler(Campos *campo)
{
    scanf("%d", &campo->x);
    scanf("%d", &campo->y);
}

int Escrever(Campos campo)
{
    printf("%d", campo.x);
    printf("%d", campo.y);
}

int main()
{
    Campos campo1, campo2;
    Ler(&campo1);
    campo2 = campo1;
    Escrever(campo2);
    return 0;
}