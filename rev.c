#include<stdio.h>
#include<string.h>

rev( )
{
    char mystrg[60];
    int leng, g;

    // Printing the program name and what the program will do
    printf("Program in C for reversing a given string \n ");
    printf("Please insert the string you want to reverse: ");

    // fetch the input string from the user
    scanf( "%s", mystrg );

    // This will find the length of your string with the help of strlen() function of string.h header file
    leng = strlen(mystrg);

    // iterate through each and every character of the string for printing it backwards or reverse direction
    for(g = leng - 1; g >= 0; g--) {
        printf("%c", mystrg[g]);        
    }
    return 0;
}
