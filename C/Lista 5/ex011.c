#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Faca um programa que imprima os senos dos angulos 30º (pi/6 radianos) 60º (pi/3 radianos), 45º (pi/4 radianos), 90º (pi/2 radianos).

#define Pi 3.14159265358979323846

int main(int argc, char const *argv[])
{
    printf("30 graus = %.4f", sin(Pi/6));
    printf("\n60 graus = %.4f", sin(Pi/3));
    printf("\n45 graus = %.4f", sin(Pi/4));
    printf("\n90 graus = %.4f\n", sin(Pi/2));
    return 0;
}