#include <stdio.h>
#include <stdlib.h>

/*
 * Faça um programa que leia um número do teclado entre 0 e 10.
 * Se o número digitado for maior que 10 uma mensagem de erro deverá ser apresentada.
 * Caso contrário mostrar o dobro do valor digitado.
 * Para esse programa OBRIGATÓRIAMENTE o comando switch deverá ser utilizado
 */

int main(int argc, char const *argv[])
{
    int num, dobro;
    printf("Insira um numero: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        dobro = num * 2;
        printf("O dobro de %d eh %d", num, dobro);
        break;

    case 2:
        dobro = num * 2;
        printf("O dobro de %d eh %d", num, dobro);
        break;
        
    case 3:
        dobro = num * 2;
        printf("O dobro de %d eh %d", num, dobro);
        break;

    case 4:
        dobro = num * 2;
        printf("O dobro de %d eh %d", num, dobro);
        break;

    case 5:
        dobro = num * 2;
        printf("O dobro de %d eh %d", num, dobro);
        break;

    case 6:
        dobro = num * 2;
        printf("O dobro de %d eh %d", num, dobro);
        break;

    case 7:
        dobro = num * 2;
        printf("O dobro de %d eh %d", num, dobro);
        break;

    case 8:
        dobro = num * 2;
        printf("O dobro de %d eh %d", num, dobro);
        break;

    case 9:
        dobro = num * 2;
        printf("O dobro de %d eh %d", num, dobro);
        break;

    default:
        printf("O numero digitado eh invalido!");
        break;
    }
    return 0;
}
