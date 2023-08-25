#include <stdio.h>
int f1(int);

int f1(int num)
{
    if (num == 0)
        return;
    else
    {
        printf("%d\t", num); // After that, there is no function or statement is left to call the recursive function.
        return f1(num - 1);  // recursive call at the end of the fun();
    }
}
int main()
{
    f1(7);
}