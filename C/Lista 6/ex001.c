#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int num;
	scanf("%d", &num);
	printf("%d - %x", num, &num);
	return 0;
}
