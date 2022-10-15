#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, d, *pa, *pb, *pc, *pd;

	scanf("%d%d%d%d", &a, &b, &c, &d);
	pa = &a;
	pb = &b;
	pc = &c;
	pd = &d;
	printf("Soma: %d", *pa + *pb + *pc + *pd);
	return 0;
}
