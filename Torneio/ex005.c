#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int entrada, alcool = 0, gas = 0, diesel = 0;
    do
    {
        scanf("%d", &entrada);
        if (entrada < 0)
        {
            entrada = 4;
        }
        switch (entrada)
        {
        case 1:
            alcool++;
            break;
        case 2:
            gas++;
            break;
        case 3:
            diesel++;
            break;
        case 4:
            break;
        default:
            break;
        }
    } while (entrada != 4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", diesel);
    return 0;
}