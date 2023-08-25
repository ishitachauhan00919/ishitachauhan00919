#include <stdio.h>

void main()
{
    int i, j, k = 1, n;

    for (i = 1; i <= 3; i++) // i for
    {
        for (j = 1; j <= i; j++, k++)
        {
            printf("%c", (char)(k + 64)); // ascii for 'A'=> 64+k=65.
        }
        printf("\n");
    }
}