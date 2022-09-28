#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int entrada, num = 1;
    scanf("%d", &entrada);
    for (int i = 0; i < entrada; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("PUM\n");
        num++;
    }
    return 0;
}