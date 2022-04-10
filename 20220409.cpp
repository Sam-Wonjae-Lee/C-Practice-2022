//Header File - Used for input/output functions
#include <stdio.h>

//Any code inside the curly brackets will be executed
int main()
{
    /*
    Every C++ statement will end with;
    printf is used to print text/output
    */
    printf("Hello World! \n");

    //int - stores integers (whole numbers), without decimals, such as 123 or -123
    //float - stores floating point numbers, with decimals, such as 19.99 or -19.99
    //char - stores single characters, such as 'a' or 'B'.Char values are surrounded by single quotes
    int myNum = 15;
    char myLetter = 'D';
    //Format Specifiers
    printf("%d, %c \n", myNum, myLetter);

    //Prevents overriding existing variable values
    const int myVariable = 100;

    /* Logical Operators
    && - And
    || - Or
    ! - Not !(x<5 && x<10)
    */

    int x = 18;
    int y = 20;
    if (x > y) 
    {
        printf("x is greater than y\n");
    } 
    else
    {
        printf("y is greater than x\n");
    }

    /*Short Hand If Else
    int time = 20;
    (time < 18) ? printf("Good day.") : printf("Good evening.");
    */

    //While & For Loop
    int i = 0;

    while (i < 5) {
        printf("%d\n", i);
        i++;
    }

    int j;

    for (j = 0; j < 5; j++) {
        printf("%d\n", j);
    }

    //Array 
    int myNumbers[] = { 25, 50, 75, 100 };
    int k;

    for (k = 0; k < 4; k++)
    {
        printf("%d\n", myNumbers[k]);
    }

    //Ends main function
    return 0;
}


