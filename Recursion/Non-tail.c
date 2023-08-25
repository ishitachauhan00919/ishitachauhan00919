#include <stdio.h>
void fun1(int);

void fun1(int n)
{
    if (n == 0)
    {
        return ;
    }            // there should be no statement or operation is called before the recursive calls.
    fun1(n - 1); // the recursive call will be the first statement in the function.
    printf("%d\t", n);
}

int main()
{
    fun1(5);
    return 0;
}