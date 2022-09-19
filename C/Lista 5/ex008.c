#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que avale se determinado número é par ou impar. Atenção: você deve OBRIGATORIAMENTE utilizar o operador condicional ? : para isso

int main(int argc, char const *argv[])
{
    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);
    ((num % 2) == 0) ? printf("Eh par!") : printf("Eh impar!!");
    return 0;
}