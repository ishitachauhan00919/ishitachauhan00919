#include <stdio.h>

int main()
{
    int A[10][10], T[10][10], row, col, i, j, k;
    int mul[10][10];
    printf("enter the number of row: ");
    scanf("%d", &row);
    printf("enter the number of col: ");
    scanf("%d", &col);
    printf("Enter for 1'st Matrix: ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter for 2nd Matrix: ");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &T[i][j]);
        }
    }
    printf("\n >>> MULTIPLICATION <<< \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < col; k++) // k stand for track equally row & col
            {

                mul[i][j] += A[i][k] * T[k][j]; // matrix a[i][k] for col one by one as well as row for t[k][j]
            }
        }
    }
    for (i = 0; i < row; i++) // for matrix form pattern
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
