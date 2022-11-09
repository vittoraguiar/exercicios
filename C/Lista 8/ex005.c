#include <stdio.h>
#include <stdlib.h>

int VerificarNumero (int num, int numSorteado) {
    if (num > numSorteado)
        return 0;
    else if (num < numSorteado)
        return 1;
    else if (num == numSorteado)
        return 2;
    return 3;
}

int main(int argc, char const *argv[])
{
    int num, numSorteado = rand() % 50;
    printf("\n\n%d\n\n", numSorteado);
    printf("Possuo um numero entre 0 e 50, vc consegue adivinhar?");
    while (num != 51)
    {
        printf("\nDigite o seu palpite: ");
        scanf("%d", &num);
        switch (VerificarNumero(num, numSorteado))
        {
        case 0:
            printf("Esta mais para baixo!\n");
            break;
        case 1:
            printf("Esta mais para cima!\n");
            break;
        case 2:
            printf("Voce acertou! O numero eh %d!!!\n", num);
            num = 51;
            break;
        }
    }
    return 0;
}