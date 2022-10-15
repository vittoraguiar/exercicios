#include <stdio.h>
#include <stdlib.h>

int main()
{
	float alt, rai, *palt, *prai;
	scanf("%f%f", &alt, &rai);

	palt = &alt;
	prai = &rai;

	printf("Volume: %.2f", 3.14 * ((*prai) * (*prai)) * (*palt));
	return 0;
}