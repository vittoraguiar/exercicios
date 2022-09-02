#include <stdio.h>
#include <stdlib.h>

/* Entrar com 20 números e imprimir a soma dos positivos e o total de números negativos. */

int main()
{

    int num[20], positivos = 0, negativos = 0;
    for (int i = 0; i < 20; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        if (num[i] > 0)
        {
            positivos += num[i];
        }
        else if (num[i] < 0)
        {
            negativos++;
        }
    }
    printf("Soma dos positivos: %d", positivos);
    printf("\nQuantidade de negativos: %d", negativos);

    return 0;
}