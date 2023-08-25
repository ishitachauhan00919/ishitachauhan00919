#include <stdio.h>

int main()
{

    int a = 20;
    int b = 10;
    int c;

    printf("Line 1 - Value of c is %d\n", c = a + b);

    printf("Line 2 - Value of c is %d\n", c = a - b);

    printf("Line 3 - Value of c is %d\n", c = a * b);

    printf("Line 4 - Value of c is %d\n", c = a / b);

    printf("Line 5 - Value of c is %d\n", c = a % b);

    printf("Line 6 - Value of c is %d\n", c = a++);
    printf("%d", a);
    printf("Line 7 - Value of c is %d\n", c = a--);
    printf("%d", a);

    return 0;
}