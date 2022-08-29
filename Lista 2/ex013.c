#include <stdio.h>
#include <stdlib.h>

/*
 * Em uma empresa os funcionários renovam o contrato por três anos.
 * O salário sofrerá um reajuste de 7%, 6% e 5%, respectivamente, nos próximos três anos.
 * Escreva um programa que leia o salário mensal atual do funcionário, e então,
 * imprima o salário mensal para cada um dos três próximos anos.
 */

int main()
{
    float salario;
    printf("Qual seu salario mensal atual? ");
    scanf("%f", &salario);
    printf("\nO seu salario por mes daqui um ano sera de R$%.2f", salario * 1.07);
    printf("\nO seu salario por mes daqui dois anos sera de R$%.2f", (salario * 1.07) * 1.06);
    printf("\nO seu salario por mes daqui tres anos sera de R$%.2f\n", ((salario * 1.07) * 1.06) * 1.05);
    return 0;
}