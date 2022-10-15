#include <stdio.h>
#include <stdlib.h>

int main()
{
	float seg, km, *pseg, *pkm, result;
	printf("Tempo em segundos: ");
	scanf("%f", &seg);
	printf("Distancia em km: ");
	scanf("%f", &km);
	pseg = &seg;
	pkm = &km;
	result = ((*pseg) * 0.02) + ((*pkm) * 1.00);
	printf("Soma: %.2f", result);
	return 0;
}
