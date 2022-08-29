#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float num1, num2;
    printf("Digite dois numeros em ponto flutuante:\n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    printf("A soma destes numeros eh: %.2f\n", (num1 + num2));
    return 0;
}