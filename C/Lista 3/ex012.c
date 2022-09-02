#include <stdio.h>
#include <stdlib.h>

/*
 * A série de RICCI difere da série de FIBONACCI porque os dois números iniciais são dados pelo usuário e os outros
 * termos são gerados a partir da soma dos dois anteriores. Escreva um programa que imprime os 20 primeiros números a partir de duas entradas do usuário.
 */

#define tam 20;

int main(int argc, char const *argv[])
{
    int nums[2] = {0, 0}, res = 0.;
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("%d - %d - ", nums[0], nums[1]);
    res = nums[0] + nums[1];
    printf("%d - ", res);
    for (int i = 0; i < tam)
    {
        nums[0] = res;
        res = res + nums[1];
        nums[1] = nums[0];
        printf("%d - ", res);
        i++;
    }
    return 0;
}