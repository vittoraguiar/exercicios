#include <stdio.h>
#include <stdlib.h>

// Fazer um programa que leia um valor e chame uma função para dizer se o número é primo ou não.
// O programa deverá ser finalizado quando o valor 0 (zero) for digitado.
// Garanta que o número lido é positivo ou zero.

int CalculaPrimo(int num) {
    int div = 1;
    for (int i = 2; i <= num; i++) {
        if (num % i == 0)
            div++;
    }
    if (div > 2)
        return 0;
    else
        return 1;
}

int main() {
    int num;
    do {
        scanf("%d", &num);
        if (CalculaPrimo(num))
            printf("Número primo\n");
        else if (!Primo(num))
            printf("Não é primo");
    } while (num != 0);
    return 0;
}
