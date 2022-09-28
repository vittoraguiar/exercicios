#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int X;
    float Y, media;

    scanf("%d", &X);
    scanf("%f", &Y);
    media = X / Y;
    printf("%.3f km/l\n", media);
    return 0;
}