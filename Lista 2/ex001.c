#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Faça um programa que leia 3 números do teclado e imprima a soma deles.
    int num1, num2, num3;
    printf("Digite 3 numeros inteiros:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    printf("\nResultado da soma dos 3 numeros: %d\n", (num1 + num2 + num3));
    return 0;
}
