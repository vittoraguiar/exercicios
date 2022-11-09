#include <stdio.h>
#include <stdlib.h>

// Criar uma função que converta uma temperatura dada em Fahrenheit em Celsius. 
// A temperatura é passada como parâmetro para uma função que retorna a temperatura em Celsius 
// que deve ser mostrada no programa principal. A fórmula para cálculo é C = ( F - 32 ) * 5 / 9

float converteTemperatura (float temp) {
    float C = (temp - 32) * 5 / 9;
    return C;
}

int main(int argc, char const *argv[])
{
    float tempF;
    printf("Insira a temperatura em Fahrenheit: ");
    scanf("%f", &tempF);
    printf("\nTemperatura em Celsius: %.2f\ne", converteTemperatura(tempF));
    return 0;
}