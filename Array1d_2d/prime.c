#include <stdio.h>

int main()
{
    int a[5], n, i, j, temp[5], t = 0;

    printf("\nEnter  Numbers in Array:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < 5; i++)
    {
       int count = 0;
        for (j = 2; j < a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                
                count = 1;

                break;
            }
        }
        if (count == 0)
        {
            temp[t] = a[i];
            t++;
        }
    }
    for (i = 0; i < t; i++)
    {
        if (j != 0)
        {
            printf(">>> prime: %d\n ", temp[i]);
        }
    }

    return 0;
}