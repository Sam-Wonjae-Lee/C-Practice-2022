#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

//문제 8-15
int main()
{
	int myNum;
	printf("Enter a number: ");
	scanf("%d", &myNum);
	int absolute = abs(myNum);
	printf("%d", absolute);
	return 0;
}

