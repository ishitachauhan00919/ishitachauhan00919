#include <stdio.h>
int main()
{
    int i = 10;
    register int *a = &i;
    printf("my register value of variable : %d", *a);
    return 0;
}