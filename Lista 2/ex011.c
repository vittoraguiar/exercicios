#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /*
     * Uma firma contrata um encanador a R$ 20,00 por dia.
     * Escreva um programa que leia o número de dias trabalhados pelo encanador e imprima a quantia liquida que deverá ser paga,
     * sabendo-se que são descontados 8% para o imposto de renda.
     */
    int diasT;
    float valor = 0;
    printf("Insira o numero de dias trabalhados pelo encanador: ");
    scanf("%d", &diasT);
    valor = (diasT * 20.0);
    valor = valor - (valor * 0.08);
    printf("\nO valor a pagar devera ser de: R$%.2f", valor);
    printf("\n");
    return 0;
}