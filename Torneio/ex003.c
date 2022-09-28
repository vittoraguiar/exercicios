#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int seg, hora, minutos;
    scanf("%d", &seg);
    hora = seg / 3600;
    seg -= hora * 3600;
    minutos = seg / 60;
    seg -= minutos * 60;
    printf("%i:%i:%i\n", hora, minutos, seg);
}