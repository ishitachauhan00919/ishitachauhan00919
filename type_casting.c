#include <stdio.h>


// IMPLICIT TYPE -CASTING 
#if 0
int main()
{
    int a = 40;   // integer a
    char b = 'A'; // character A

    // char b implicitly converted to its ASCII integer value where the ASCII value of 'c' is 99
    a = a + b;

    // since the variable res is a floating type, the variable a is converted to a floating type.
    float res = a + 40.0;

    printf("a = %d, res = %f", a, res);
    return 0;
}
#endif









// EXPLICIT TYPE CASTING 

  

int main ()
{
    int x = 40;
    float y;

    //Implicit conversion occurs at this point since we do not tell the compiler to change the type
    y = x;

    printf ("The value of the variable y: %f\n", y);
}


