#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /*
     *Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche.
     * Considere que a cada execução somente será calculado um único item.
     */
    // Menu of a snack bar
    float dog, bauruSimples, bauruOvo, hamburguer, cheeseB, refri; // Foods
    int code, qnt;
    float result;
    // Snacks price
    dog = 1.20;
    bauruSimples = 1.30;
    bauruOvo = 1.50;
    hamburguer = 1.20;
    cheeseB = 1.30;
    refri = 1.00;
    // Program
    printf("Please insert the food code you want: ");
    scanf("%d", &code);
    printf("Now, enter the quantity: ");
    scanf("%d", &qnt);
    if (code == 100)
    {
        result = dog * qnt;
    }
    else if (code == 101)
    {
        result = bauruSimples * qnt;
    }
    else if (code == 102)
    {
        result = bauruOvo * qnt;
    }
    else if (code == 103)
    {
        result = hamburguer * qnt;
    }
    else if (code == 104)
    {
        result = cheeseB * qnt;
    }
    else if (code == 105)
    {
        result = refri * qnt;
    }
    else
        printf("Please reset the program...");
    printf("The price you have to pay it's R$ %.2f", result);
    printf("\nProgram end\n");
    return 0;
}