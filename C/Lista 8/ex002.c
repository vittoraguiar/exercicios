#include <stdio.h>
#include <stdlib.h>

// Escreva uma função que retorne o menor número entre dois números ponto flutuante fornecidos pelo usuário


float MenorNumero(float num1, float num2)
{
    float result = num1 <= num2 ? num1 : num2;
    return result;
}

int main(int argc, char const *argv[])
{
    float num1, num2, result;
    scanf("%f %f", &num1, &num2);
    result = MenorNumero(num1, num2);
    printf("\n%.2f", result);
    return 0;
}
