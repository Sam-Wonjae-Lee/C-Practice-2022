#include <stdio.h>
#pragma warning(disable:4996)

//문제 7-12
int main()
{
	int myNum;
	int x = 1;
	
	printf("Enter a number: ");		//Input
	scanf("%d", &myNum);	//Puts input into myNum variable

	for (int i = 0; i < 9; ++i) //For loop 9 times
	{
		int mult = myNum * x;
		printf("%d x %d = %d\n", myNum, x, mult); //Output
		++x;	
	}
	
	return 0;
}