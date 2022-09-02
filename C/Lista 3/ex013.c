#include <stdio.h>
#include <stdlib.h>

/*
 * Infelizmente o algoritmo que calcula o valor do táxi tem as variáveis tempo e distância,
 * ou seja, mesmo que o carro esteja parado em um sinal, a conta do taxi vai aumentando.
 * Faça um programa que dado o tempo e a distância, calcule o valor a ser pago. O custo é 0,02 centavos por segundo e R$ 1,00 por quilômetro.
 */

#define custoTempo 0.01
#define custoKm 1.00

int main(int argc, char const *argv[])
{
    float tempo, distancia, conta;
    printf("Insira o tempo no taxi: ");
    scanf("%f", &tempo);
    printf("Insira a distancia no taxi: ");
    scanf("%f", &distancia);
    conta = (tempo * custoTempo) + (distancia * custoKm);
    printf("\nO valor da conta a pagar eh de R$ %.2f\n", conta);
    return 0;
}