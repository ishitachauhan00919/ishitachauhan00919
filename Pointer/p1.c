#include <stdio.h>

void main()
{
    int i = 1;
    int *q;
    int *p = &i;
     q = p;
    *q = 5;

    printf("%d", *q);
}
