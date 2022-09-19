#include <stdio.h>
#include <stdlib.h>

// Faça um programa que leia um valor do usuário e mostre o seu resultado em octal

int main(int argc, char const *argv[])
{
    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);
    printf("\nO seu numero escrito em octal fica assim: %o\n", num);
    return 0;
}