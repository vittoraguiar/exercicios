#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2, *pNum1, *pNum2, aux;

	scanf("%d%d", &num1, &num2);

	pNum1 = &num1;
	pNum2 = &num2;
	aux = *pNum1;
	*pNum1 = *pNum2;
	*pNum2 = aux;

	printf("%d - %d", num1, num2);
	return 0;
}
