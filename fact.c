#include <stdio.h>
 factorial() {    
 int i,fact=1,number;    
 printf("\nEnter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d\n",number,fact);    
//return 0;  
}   
