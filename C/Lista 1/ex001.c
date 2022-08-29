#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* Faça um programa que leia a data de nascimento de uma pessoa expressa em anos, meses e dias e mostre a sua idade atual expressa apenas em dias.
     * Desconsiderando anos bissextos e considerando que os meses possuem 30 dias
    */

    int dA, mA, aA, dN, mN, aN, anos, meses, dias;// dia atual <-> dia nascimento
    char criterio = 'n';
    // programa
    do
    {
        printf("Insira a data de hoje (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &dA, &mA, &aA);
        printf("Data de hoje: %d/%.2d/%d", dA, mA, aA, ".");
        printf("\nEsta correta? (s ou n): ");
        scanf(" %c", &criterio);
    } while (criterio == 'n');
    criterio = 's';
    do
    {
        printf("\nInsira a sua data de nascimento (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &dN, &mN, &aN);
        printf("Data de nascimento: %d/%.2d/%d", dN, mN, aN, ".");
        printf("\nEsta correta? (s ou n): ");
        scanf(" %c", &criterio);
    } while (criterio == 'n');
    criterio = 's';

    anos = aA - aN;

    dias += anos * 365;
    
    printf("\n%d", anos);
    return 0;
}
