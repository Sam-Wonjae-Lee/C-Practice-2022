#pragma warning(disable:4996)
#include <stdio.h>
/* Search C Comment Shortcuts
	Ctrl K + Ctrl C
	Ctrl K + Ctrl U
	Ctrl Shift /
*/

int main() {
	//문제 7-3
	// Create an integer variable that will store the number we get from the user
	int myNum;
	int i = 1;

	// Ask the user to type a number
	printf("Enter a number: ");

	// Get and save the number the user types
	scanf("%d", &myNum);

	while (i <= myNum) 
	{
		printf("%d ", i);
		++i;
	}

	return 0;
}

