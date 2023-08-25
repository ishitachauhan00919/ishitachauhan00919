#include <stdio.h>
void cube(int);
void fact(int);
void square(int);

int main()
{
    void(*ptr[])(int)={cube,fact,square};  //using multiple function require arr[]={};
    int n, options;
    printf("Enter the num: ");
    scanf("%d", &n);
    do
    {
        printf(">>> select for: 1 Cube\n");
        printf(">>> select for: 2 Factorial\n");
        printf(">>> select for: 3 Square\n");
        printf(">>> select for: 4 Exit\n");

        printf("\n\n ******Enter your Choice******\n");
        scanf("%d", &options);

        switch (options)
        {
        case 1:
         (ptr[0])(n);
            break;
        case 2:
        (ptr[1])(n);
            break;
        case 3:
        (*ptr[2])(n);
            break;
        case 4:
            printf("EXIT");
            break;
        default:
            printf("Sorry...Please enter this valid Options.\n\n");
        }
    } while (options != 4);

    return 0;
}

void cube(int n)
{
    printf("cube: %d\n\n", n * n * n);
}

void square(int n)
{
    printf("Square: %d\n\n", n * n);
}

void fact(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("fact: %d\n\n", fact);
}
