#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Faca um programa que solicite uma base,  um exponte  e entao faca a potenciacao dessa base segundo o exponte. Mostre o resultado.

int main(int argc, char const *argv[])
{
    int num, potencia, result;
    printf("Insira um numero de base: ");
    scanf("%d", &num);
    printf("Qual a potencia? ");
    scanf("%d", &potencia);
    result = pow(num, potencia);
    printf("Resultado: %d", result);
    return 0;
}