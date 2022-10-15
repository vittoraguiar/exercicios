#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int arvore, *pArvore, cont, tiro, *pTiro;
	cont = 1;

	printf("Marciano, escolha uma árvore para se esconder: ");
	scanf("%d", &arvore);
	pArvore = &arvore;

	do
	{
		printf("Hora do cacador, de seu tiro: ");
		scanf("%d", &tiro);
		pTiro = &tiro;

		if (*pTiro > *pArvore)
		{
			printf("O marciano esta para a esquerda!\n");
		}
		else if (*pTiro < *pArvore)
		{
			printf("O marciano esta para a direita!\n");
		}
		else
		{
			break;
		}
		cont++;
	} while (cont < 6);
	if (cont < 6)
	{
		printf("O Cacador ganhou!");
	}
	else
	{
		printf("O Marciano ganhou!");
	}
	return 0;
}