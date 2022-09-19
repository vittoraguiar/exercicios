#include <stdio.h>
#include <stdlib.h>

// Faca um programa que leia um array de double e a seguir mostre o tamanho alocado em memoria desse array. Utilize a funcao sizeof()

int main(int argc, char const *argv[])
{
    double array[5];
    printf("Leitura do array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%lf", &array);
    }
    printf("Tamanho vetor: %d bytes", sizeof(array));
    return 0;
}