// *********Sum of natural num*******

#include <stdio.h>
add(n); // FUNCTION DECLARATION

int add(int n) // FUNCTION DEFINATION
{
    if (n != 0) // until n!=0
    {
        return n + add(n - 1); // use recursion.
    }
    else
    {
        return n;
    }
}

int main()
{
    int n;
    printf(">>> Enter the num:");
    scanf("%d", &n);
    printf("sum(+): %d", add(n)); // CALL BACK
    return 0;
}