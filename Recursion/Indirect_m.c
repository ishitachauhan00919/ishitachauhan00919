#include <stdio.h>
void even();
void odd();

int n = 1;

int main()
{
    odd();
}

void even()
{
    if (n <= 10)
    {
        printf("odd: %d\t\n", n - 1);

        n++;
        printf("n-: %d\t", n);
        odd();
    }
}
void odd()
{
    if (n <= 10)
    {
        printf("even: %d\t\n", n + 1);

        ++n;
        printf("n+: %d\t", n);

        even();
    }
}