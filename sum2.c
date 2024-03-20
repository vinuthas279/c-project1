#include <stdio.h>

sum2 ()
{
    int num1, num2, sum; // declare variables

    printf("Enter any two numbers: "); // prompt user for input
    scanf("%d%d", &num1, &num2); // read input from user

    sum = num1 + num2; // calculate sum

    printf("Sum of %d and %d = %d\n", num1, num2, sum); // print sum

    return 0;
}

