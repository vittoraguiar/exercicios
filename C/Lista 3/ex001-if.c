#include <stdio.h>
#include <stdlib.h>

/*
 * Faça um programa que leia um número do teclado entre 0 e 10.
 * Se o número digitado for maior que 10 uma mensagem de erro deverá ser apresentada.
 * Caso contrário mostrar o dobro do valor digitado.
 */

int main(int argc, char const *argv[])
{
    int num, dobro;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num > 0 && num < 10)
    {
        dobro = num * 2;
        printf("O numero digitado eh %d e o dobro eh %d.", num, dobro);
    }
    else
        printf("Erro!");
    return 0;
}