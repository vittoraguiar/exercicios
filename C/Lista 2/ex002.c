#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Faça uma variação do programa anterior que use apenas 2 variáveis.
    int num, result = 0;
    printf("Digite 3 numeros inteiros:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num);
        result += num;
    }
    printf("O resultado eh: %d\n", result);
    return 0;
}