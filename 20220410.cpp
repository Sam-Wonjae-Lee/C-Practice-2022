#include <stdio.h>

int main()
{
//문제 7-1

	int i = 1; //while loop
	while (i <= 10)
	{
		printf("%d ", i);
		++i;
	}
	printf("\n");

	int j; //for loop
	for (j = 0; j <= 10; ++j)
	{
		printf("%d ", j);
	}
	printf("\n");

	int k = 1; //do while loop
	do
	{
		printf("%d ", k);
		++k;
	} while (k <= 10);
	printf("\n");

//문제 7-2
	int a = 10;
	while (a >= 2)
	{
		printf("%d ", a);
		a = a - 2;
	}

	return 0;
}