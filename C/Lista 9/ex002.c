#include <stdio.h>
#include <stdlib.h>

// Um comerciante deseja armazenar o nome e o valor de 10 produtos de seu estabelecimento.
// Monte um array de structs para armazena-los

typedef struct
{
    char desc[20];
    double valor;
} Produto;

int main()
{
    Produto produto[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite a descricao do produto: ");
        gets(produto[i].desc);
        printf("\nDigite o valor do produto: ");
        fflush(stdin);
        scanf("%lf", &produto[i].valor);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("\nProduto: ");
        puts(produto[i].desc);
        printf("Valor: ");
        printf("%.2lf\n", produto[i].valor);
    }
    return 0;
}