#include <stdio.h>
#include <stdlib.h>

/*
 *Crie um programa que imprima a tabuada do 1 ao 9.
 */

int main(int argc, char const *argv[])
{
    int criterio;
    criterio = 10;
    for (int i = 1; i < criterio; i++)
    {
        printf("\n----------Tabuada do %d----------\n", i);
        for (int num = 1; num < 10; num++)
        {
            printf("%d . %d = %d\n", i, num, (i * num));
        }
    }
    printf("\nFim do programa\n");
    return 0;
}
