#include <stdio.h>
struct scope  //anonymous union
{
    union
    {
        char alpha;
        char num;
    };
};

int main()
{
    struct scope x, y;  //define variable
    x.num = 16;
    y.alpha = 'a';

    printf("%c,%d", y.alpha, x.num);
    return 0;
}
