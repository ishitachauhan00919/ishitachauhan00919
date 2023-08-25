#include <stdio.h>

// // ----  static received = 25, dynamic received = 30 ----

// note: c programming always follows static scopeing

int fun1(int);
int fun2(int);

int a = 5;

int main()
{
    int a = 10;
    a = fun1(a); // value pass to int b=10
    printf("%d", a);

    return 0;
}
int fun1(int b)
{               // value receive from int a=10
    b = b + 10; // total= 20
    b = fun2(b);
    return b;
}
int fun2(int b)
{
    int c = a + b;
    return c;
}
