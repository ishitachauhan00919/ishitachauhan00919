#include <stdio.h>

void main()

{

    int p = 9, q = 6;

    p = ++q;    //Increment

    int a =7, b=10;

    a = b--;    //Decrement

    printf("post_p: %d\t", p);

    printf("pre_q: %d\n", q);

    printf("a: %d\t", a);

    printf("b: %d", b);
    
}
