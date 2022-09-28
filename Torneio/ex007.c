#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x, soma = 0, cont = 0;
    double media;
    do
    {
        scanf("%d", &x);
        if (x >= 0)
        {
            soma += x;
            cont++;
        }
    } while (x >= 0);
    media = (double)soma / cont;
    printf("%.2lf\n", media);
    return 0;
}