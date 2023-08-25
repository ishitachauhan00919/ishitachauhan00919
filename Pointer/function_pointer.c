#include <stdio.h>
void func_a(int, int);
void func_b(int, int);

void func_a(int a, int b)
{
    printf("sub: %d\n", a - b);
}
void func_b(int a, int b)
{
    printf("Mul: %d\n", a * b);
}

void rec(void (*p)(int, int)) // pointer to the function, e.g. call it
{
    (*p)(2, 9);
}

void main()
{
    rec(func_a); 
    rec(&func_b); // both are valid/same.
}