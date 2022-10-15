#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int num, *ptr;

	scanf("%d", &num);

	ptr = &num;

	if (*ptr != 0)
	{
		*ptr < 0 ? printf("Negativo e ") : printf("Positivo e ");
		*ptr % 2 == 0 ? printf("Par") : printf("Impar");
	}
	else
	{
		printf("O conteudo eh 0");
	}
	return 0;
}
