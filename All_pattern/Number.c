#include <stdio.h>
//1
//12.. 

int main()
{
    int i, j, n;
    printf("enter the the num:  ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
