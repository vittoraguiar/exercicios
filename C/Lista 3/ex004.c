#include <stdio.h>
#include <stdlib.h>

/*
 * Escreva um programa que imprime na tela a série de FIBONACCI até um numero dado.
 * Esta séria começa com 1 e 1 e os próximos números são obtidos pela soma dos anteriores.
 */

int main(int argc, char const *argv[])
{
    int num, n1, n2, res;
    n1 = 1;
    n2 = 1;
    res = 1;
    printf("Escreva um numero: ");
    scanf("%d", &num);

    printf("%d ", res);
    res = n1 + n2;

    while (res <= num)
    {
        n1 = res;
        res = res + n2;
        n2 = n1;
        if (res <= num)
        {
            printf("%d ", res);
        }
        else
            break;
    }
    printf("\nFim do programa...\n\n");
    return 0;
}
