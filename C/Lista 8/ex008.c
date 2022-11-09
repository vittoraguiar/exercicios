#include <stdio.h>
#include <stdlib.h>

// Elaborar uma função para ler a base e a altura de um retângulo, calcular e retornar a sua área.
// Na função principal é apresentado o valor dessa área. Fórmula: Area = base * altura

float CalculoRetangulo (float base, float altura) {
    float area = base * altura;
    return area;
}

int main(int argc, char const *argv[])
{
    float base, altura;
    printf("Insira a base e a altura do retangulo: ");
    scanf("%f %f", &base, &altura);
    printf("Valor da area: %.2f", CalculoRetangulo(base, altura));
    return 0;
}