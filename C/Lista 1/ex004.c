#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Faça um programa que leia o tempo de duração de um evento em uma fábrica expressa em segundos e mostre-o expresso em horas, minutos e segundos.
    int time, hour, minutes, seconds;
    printf("Pls enter the seconds in the event: ");
    scanf("%d", &time);
    hour = time / 3600;
    seconds = time % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;
    printf("You stayed in the event for %dh, %dm and %ds!", hour, minutes, seconds);
    printf("\n");
    return 0;
}