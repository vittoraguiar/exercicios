#include <stdio.h>
#include <stdlib.h>

/*
Aloque de forma dinâmica dois arrays com o número de posições informadas pelo usuário.
Preencha seus elementos de forma randômica (utilize a função rand() ).
Efetue a soma de cada posição do array 1 com a sua correspondente no array 2. 
Mostre o resultado. Após isso, libere o espaço alocado em memória para os arrays.
*/

int main(int argc, char const *argv[])
{
    int *v, *v2, tam;
    
    printf("Defina o tamanho dos vetores: ");
    scanf("%d", &tam);

    v = (int *)malloc(tam * sizeof(int));
    v2 = (int *)malloc(tam * sizeof(int));
    
    for (int i = 0; i < tam; i++)
    {
        v[i] = rand() % 10;
        v2[i] = rand() % 10;
    }
    printf("\nVetor 1: ");
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\nVetor 2: ");
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", v2[i]);
    }
    printf("\nSoma: ");
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", v[i] + v2[i]);
    }
    free(v);
    free(v2);
    return 0;
}