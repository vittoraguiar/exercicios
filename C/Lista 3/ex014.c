#include <stdio.h>
#include <stdlib.h>

/*
 * Um marciano chegou a uma floresta e se escondeu atrás de uma das 100 árvores quando viu um caçador.
 * O caçador só tinha cinco balas em sua espingarda. Cada vez que ele atirava, e não acertava, é claro, o marciano dizia:
 * “estou mais à direita ou mais à esquerda. Se o caçador não conseguir acertar o marciano, ele será levado para marte.
 * Implementar este jogo para dois jogadores, onde um escolhe a árvore em que o marciano irá se esconder, e o outro tenta acertar.
 * (Sugestão: utilize números para representar as árvores)
 */

#define espaco 15

int main(int argc, char const *argv[])
{
    int arvore, tiro, acertos = 0;
    printf("\nREGRAS DO JOGO: ");
    printf("\nO MARCIANO PODE SE ESCONDER ENTRE 100 ARVORES, OU SEJA, DO 0 AO 100");
    printf("\nO CACADOR DEVERA ACERTAR A ARVORE");
    printf("\nCASO ERRE 5 VEZES, SERA ABDUZIDO, CASO CONTRARIO, SAIRA VIVO");
    printf("\n----------------------------------------------------------------------");
    do
    {
        printf("\n\n\nEm qual arvore o Marciano ira se esconder? ");
        scanf("%d", &arvore);
    } while (arvore < 0 || arvore > 100);
    for (int i = 0; i < espaco; i++)
    {
        printf("\n\n\n\n\n");
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n\nEm qual arvore o cacador ira atirar? ");
        scanf("%d", &tiro);
        if (tiro == arvore)
        {
            printf("\nACERTOU!");
            acertos++;
            break;
        }
        else if (tiro < arvore)
        {
            printf("Marciano esta a DIREITA");
        }
        else if (tiro > arvore)
        {
            printf("Marciano esta a ESQUERDA");
        }
    }
    if (acertos == 0)
    {
        printf("\n\nCACADOR ABDUZIDO!");
        printf("\n/*A arvore escolhida era a %d!!! Foi quase.", arvore);
    }
    else
    {
        printf("\nO CACADOR CONSEGUIU!!!!\n");
    }
    return 0;
}