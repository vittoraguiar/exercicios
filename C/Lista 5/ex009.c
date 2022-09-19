#include <stdio.h>
#include <stdlib.h>

// Faca um programa que leia dois valores do usuario e usando o operador condicional ? : diga qual deles é o maior

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    printf("Insira o segundo numero: ");
    scanf("%d", &num2);
    (num1 > num2) ? printf("\nNumero 1 eh maior!\n") : printf("\nNumero 2 eh maior!\n");
    return 0;
}