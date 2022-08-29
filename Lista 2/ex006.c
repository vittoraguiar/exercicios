#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Faça um programa que leia 3 angulos de um triangulo e diga se esse triangulo é  um triângulo retângulo
    int ang1, ang2, ang3;
    int result;
    printf("Digite os angulos do triangulo:\n");
    printf("Primeiro angulo: ");
    scanf("%d", &ang1);
    printf("Secundo angulo: ");
    scanf("%d", &ang2);
    printf("Terceiro angulo: ");
    scanf("%d", &ang3);
    result = ang1 + ang2 + ang3;
    while (result != 180)
    {
        printf("Medidas erradas, digite novamente os angulos do triangulo:\n");
        printf("Primeiro angulo: ");
        scanf("%d", &ang1);
        printf("Secundo angulo: ");
        scanf("%d", &ang2);
        printf("Terceiro angulo: ");
        scanf("%d", &ang3);
        result = ang1 + ang2 + ang3;
    }
    if (ang1 == 90)
    {
        printf("Eh um triangulo retangulo.");
    }
    else if (ang2 == 90)
    {
        printf("Eh um triangulo retangulo.");
    }
    else if (ang3 == 90)
    {
        printf("Eh um triangulo retangulo.");
    }
    else
    {
        printf("Nao eh um triangulo retangulo.");
    }
    printf("\n");
    return 0;
}
