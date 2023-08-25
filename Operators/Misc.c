#include <stdio.h>

int main()
{
int num1 = 4;
short num2;
double num3;
int* ptr;

/* example of sizeof operator */
printf("Line 1 - Size of variable num1 = %d\n", sizeof(num1) );
printf("Line 2 - Size of variable num2 = %d\n", sizeof(num2) );
printf("Line 3 - Size of variable num3= %d\n", sizeof(num3) );

/* example of & and * operators */
ptr = &num1; /* 'ptr' now contains the address of 'a'*/
printf("Value of num1 is %d\n", num1);
printf("*ptr is %d.\n", *ptr);

/* example of ternary operator */

num1 = 10;
num2 = (num1 == 1) ? 20: 30;
printf( "Value of num2 is %d\n", num2 );
num2 = (num1 == 10) ? 20: 30;
printf( "Value of num2 is %d\n", num2 );
return 0;
}