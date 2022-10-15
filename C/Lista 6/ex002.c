#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	float n1, n2;
	float *p1, *p2;

	scanf("%f%f", &n1, &n2);

	p1 = &n1;
	p2 = &n2;

	printf("Valor de n1:  %.2f\n", n1);
	printf("Endereco de n1: %x\n\n", &n1);

	printf("Valor de n2: %.2f\n", n2);
	printf("Endereco de n2: %x\n\n", &n2);

	printf("Valor do ponteiro n1: %x\n", p1);
	printf("Valor apontado de n1: %.2f\n\n", *p1);

	printf("Valor do ponteiro n2: %x\n", p2);
	printf("Valor apontado de n2: %.2f\n", *p2);
	return 0;
}