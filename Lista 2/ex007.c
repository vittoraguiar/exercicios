#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Faça um programa que leia 4 pontos P1(x,y), P2(x,y), P3(x,y) e P4(x,y) do sistema cartesiano R2 e imprima a área do quadrilátero formado por estes 4 pontos
    int aX, aY, bX, bY, cX, cY, dX, dY, area;
    area = 0;
    printf("Insira o primeiro ponto: ");
    scanf("%d,%d", &aX, &aY);
    printf("\nInsira o segundo ponto: ");
    scanf("%d,%d", &bX, &bY);
    printf("\nInsira o terceiro ponto: ");
    scanf("%d,%d", &cX, &cY);
    printf("\nInsira o quarto ponto: ");
    scanf("%d,%d", &dX, &dY);
    area = (aX * bY + aY * cX + bX * cY + aX * cY + aY * dX + cX * dY) - (bY * cX + aX * cY + aY * bX + cY * dX + aX * dY + aY * cX);
    if (area < 0)
        area *= -1;
    area = area / 2;
    printf("\nA area eh: %d", area);
    return 0;
}
