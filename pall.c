#include <stdio.h>

pall() {
  /* Variable Declaration and Initialization. */
  int input, reverse = 0, rem, temp;

  /* taking user input */
  printf("Please enter an integer number:");
  scanf("%d", & input);
  temp = input;

  /* Reverse the number using while loop */
  while (temp != 0) {
    rem = temp % 10;
    reverse = reverse * 10 + rem;
    temp /= 10;
  }

  /* Check the reversed number with the user input */
  if (reverse == input)
    printf("%d is a palindrome number.", input);
  else
    printf("%d is not a palindrome number.", input);
}
