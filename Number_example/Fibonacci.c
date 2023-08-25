#include <stdio.h>
int main()
{
    int n;
    printf("enter the num: ");
    scanf("%d", &n);
    int a = 0, b = 1;
    for (int i = 0; i < n; i++)
    {
        int c = a + b;
        a = b;
        b = c;

        printf("%d\t", c);
    }
    return 0;
}