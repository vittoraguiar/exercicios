#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int ladoA, ladoB, ladoC, ladoMaior, result;
    printf("\nInsira o a medida do primeiro lado do triangulo: ");
    scanf("%d", &ladoA);
    printf("\nInsira o a medida do primeiro lado do triangulo: ");
    scanf("%d", &ladoB);
    printf("\nInsira o a medida do primeiro lado do triangulo: ");
    scanf("%d", &ladoC);
    // Formula: a² = b² + c²
    ladoA *= ladoA;
    ladoB *= ladoB;
    ladoC *= ladoC;
    if (ladoA > ladoB && ladoA > ladoC)
    {
        if (ladoA == ladoB + ladoC)
        {
            printf("\nCom as medidas inseridas, o triangulo eh um triangulo retangulo.\n");
        }
        else
            printf("\nCom as medidas inseridas, o triangulo nao eh um triangulo retangulo.\n");
    }
    else if (ladoB > ladoA && ladoB > ladoC)
    {
        if (ladoB == ladoA + ladoC)
        {
            printf("\nCom as medidas inseridas, o triangulo eh um triangulo retangulo.\n");
        }
        else
            printf("\nCom as medidas inseridas, o triangulo nao eh um triangulo retangulo.\n");
    }
    else
    {
        if (ladoC == ladoB + ladoA)
        {
            printf("\nCom as medidas inseridas, o triangulo eh um triangulo retangulo.\n");
        }
        else
            printf("\nCom as medidas inseridas, o triangulo nao eh um triangulo retangulo.\n");
    }

    return 0;
}