#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, *ptr;
	scanf("%d", &num);
	ptr = &num;
	for (int i = 0; i < 10; i++)
	{
		(*ptr)++;
	}
	printf("%d", num);
	return 0;
}