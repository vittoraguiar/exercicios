#include <stdio.h>
#include <stdlib.h>

/*
 * Uma companhia telefônica opera com a seguinte tarifa: uma chamada telefônica com duração de 3 minutos custa R$ 1.15. Cada minuto adicional custa R$ 0.26.
 * Escreva um programa que leia a duração total de uma chamada (em minutos) e calcule o total a ser pago.
 */

int main(int argc, char const *argv[])
{
    int min;
    float custo;
    min = 0;
    custo = 1.15;
    printf("Insira os minutos de ligacao: ");
    scanf("%d", &min);
    if (min < 4)
    {
        printf("O custo da chamada eh de R$1,15");
    }
    if (min > 3)
    {
        min -= 3;
        custo += min * 0.26;
        printf("O custo da chamada eh de R$%.2f", custo);
    }
    return 0;
}
