#include <stdio.h>
int fact(int);

int fact(int num)
{
    if (num != 1)
    {

        return num * fact(num - 1);
    }
    else
    {
        return num;
    }
}
int main()
{
    int n;
    printf("enter the num: ");
    scanf("%d", &n);
    printf("Num %d of Factorial: %d ", n, fact(n));
    return 0;
}