#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    printf("enter the num: ");
    scanf("%d", &n);
    int temp = n;

    while (n)
    {
        int r = n % 10;
        sum = sum +( r* r* r);
        n = n / 10;

    }

    if (sum == temp)
    {
        printf("num is armstrong");
    }
    else
    {
        printf("not armstrong");
    }

    return 0;
}
