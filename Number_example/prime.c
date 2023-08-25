#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("enter the num: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
        if (count == 2)
        {
            printf("prime num");
        }
        else
        {
            printf("not prime");
        }
        return 0;
    }
