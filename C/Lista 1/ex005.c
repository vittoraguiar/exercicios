#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Escreva um programa que calcule a soma de um conjunto de valores. O algoritmo deve terminar quando um valor zero for lido
    int value, result = 0;
    do
    {
        printf("\nPls enter a value: ");
        scanf("%d", &value);
        if (value == 0)
        {
            break;
        }
        result = value + result;
        printf("Result: %d", result);
    } while (value != 0);
    printf("\nProgram end\n");
    return 0;
}