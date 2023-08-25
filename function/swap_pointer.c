//  *****  using call by reference&(pointer)/Value****

#include <stdio.h>

void sum_data(int *x, int *y); // using by reference
void sum_data2(int x, int y);  // using by value
void swap(int *x, int *y);

int main()
{
    int x = 16, y = 9;
    printf("x : %d  y: %d\n", x, y);
    swap(&x, &y);
    sum_data(&x, &y); // call by reference
    sum_data2(x, y);  // call by value

    printf("x: %d  y: %d", x, y);
    return 0;
}

void sum_data(int *x, int *y)
{
    *x = (*x) + 1;
    *y = (*y) + 1;
    printf("%d,%d", *x, *y);
}

void sum_data2(int x, int y)
{
    x += 1;
    y += 1;
    printf("%d,%d", x, y);
}

void swap(int *x, int *y)
{
    int temp;  //store temporary data.

    temp = *x;
    *x = *y;
    *y = temp;
}
