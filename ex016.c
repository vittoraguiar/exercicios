#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num, result;
    printf("Insira um numero para calcular o seu quadrado:\n");
    scanf("%d", &num);
    result = num * num;
    printf("O numero ao quadrado e: %d\n", result);
    return 0;
}