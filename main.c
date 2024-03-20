#include<stdio.h>
main()
{
	printf("\n\n\tWelcome to Manoj's C program!\n\n");
	int c;

 	while(1)
	{
		printf("1. Factorial of a number\n");
		printf("2. Biggest of 2 numbers\n");
		printf("3. Biggest of 3 numbers\n");
		printf("4. Pallindrome\n");
		printf("5. Sum of 2 number\n");
		printf("6. Reverse\n");
		printf("7. Fibonaci\n");
		printf("8. Sort numbers\n");
		printf("9. Exit\n\n\n");
		printf("Enter your choice :  ");
		scanf("%d",&c);

	if (c == 1) {
		fact ();
		break;
	} else if (c == 2) {
		big2 ();
		break;
	} else if (c == 3) {
		big3 ();
		break;
	} else if (c == 4) {
		pall ();
		break;
	} else if (c == 5) {
		sum2 ();
		break;
	} else if (c == 6) {
		rev ();
		break;
	} else if (c == 7) {
		fib ();
		break;
	} else if (c == 8) {
		sort ();
		break;
	} else if (c == 9) {
		printf ("\n\nThank you. Until next time");
		exit(0);
	} else {
		printf ("\nInvalid option. Please try again.");
	}
	}
}
