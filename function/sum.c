#include <stdio.h>
// in this code function-pointer 
#if 1

int add(int x, int y);


int main()
{
    int n1, n2,z;

    int (*Add)(int,int)= &add;   //Declaration of function pointer, Assign address(&add) to (*Add)

    printf("enter the num: ");
    scanf("%d %d", &n1, &n2);

    
     z = (*Add)(n1,n2);   
    printf(">> sum: %d", z);
    return 0;
}

int add(int x, int y)
{
    return x + y;
}
#endif












#if 0

int sum(int x);

int sum(int x)
{
    return x + 4;
}

int main()
{
    printf("Add (+): %d", sum(4));
    return 0;
}
#endif