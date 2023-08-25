#include <stdio.h>

int main()
{
    int arr[100], n; // array
    int i, j, temp;
    int z = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", z);

    printf("Enter elements: ");
    scanf("%d", &n);

    int z = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", z);

    printf("Enter elements of the array: \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Ascending: ");
    for (i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    return 0;
}