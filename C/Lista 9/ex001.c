#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[20];
    char endereco[30];
    int idade;
} Pessoa;

void LerPessoa(Pessoa *pto)
{
    gets(pto->nome);
    scanf("%d", &pto);
    fflush(stdin);
    gets(pto->endereco);
}

void PrintarPessoa(Pessoa *pto)
{
    printf("Nome: %s\n", pto->nome);
	printf("Idade: %d \n", pto->idade);
	printf("Endereco: %s \n", pto->endereco);
}

int main(int argc, char const *argv[])
{
	Pessoa pessoa;
    LerPessoa(&pessoa);
    PrintarPessoa(&pessoa);
    return 0;
}