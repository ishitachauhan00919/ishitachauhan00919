#include <stdio.h>
int main()
{
    int a[10], n, re;
    printf("Enter the some nums: \n");
    scanf("%d", &n);

    while (n > 0)
    {
        re = n % 10;
        if (a[re] == 1)
        {
            break;
        }
        a[re] = 1;
        n = n / 10;
    }
    if (n > 0)
    {
        printf("repeate");
    }
    else
    {
        printf(" n repeated");
    }
    return 0;
}