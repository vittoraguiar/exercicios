#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /*
     * Faça um programa que converta graus Co em graus Fo e vice-versa. Ou seja, se for lida uma temperatura em graus Celsius,
     * esta deverá ser convertida em graus Fahrenheit e se for lida em graus Fahrenheit, deverá ser convertida em graus Celsius.
     */
    float celsius, fahr;
    char criterio = 'a';
    printf("Voce deseja ler Celsius ou Fahrenheit? (c ou f): ");
    scanf(" %c", &criterio);
    if (criterio == 'c')
    {
        printf("Insira os graus em Celsius: ");
        scanf("%f", &celsius);
        fahr = fahr * 1.8 + 32;
        printf("Graus Celsius: %.2f", fahr);
    }
    if (criterio == 'f')
    {
        printf("Insira os graus em Fahrenheit: ");
        scanf("%f", &fahr);
        celsius = (fahr - 32.00) / 1.8;
        printf("Graus Fahrenheit: %.2f", celsius);
    }
    return 0;
}
