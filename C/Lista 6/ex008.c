#include <stdio.h>
#include <stdlib.h>

int main()
{
	float idades[10], *ptr;
	float soma, *psoma;
	soma = 0;
	psoma = &soma;
	for (int i = 0; i < 10; i++)
	{
		printf("%d -- ", i + 1);
		scanf("%f", &idades[i]);
		ptr = &idades[i];
		*psoma += *ptr;
	}
	printf("Media: %.2f", *psoma / 10);
	return 0;
}
