#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int num1;
    int num2;
} Numeros;

void Ler(Numeros *numeros)
{
    scanf("%d", &numeros->num1);
    scanf("%d", &numeros->num2);
}

void Escrever(Numeros numeros)
{
    printf("\n%d", numeros.num1);
    printf(" e %d", numeros.num2);
    printf("\n__________");
}

Numeros Inverter(Numeros num)
{
    Numeros aux;
    aux.num1 = num.num1;
    aux.num2 = num.num2;
    num.num1 = aux.num2;
    num.num2 = aux.num1;
    return num;
}

int main()
{
    Numeros numeros, numerosInvertidos;
    Ler(&numeros);
    Escrever(numeros);
    numerosInvertidos = Inverter(numeros);
    Escrever(numerosInvertidos);
    return 0;
}