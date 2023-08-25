#include <stdio.h>

int maximum(int arr[], int N, int *max, int *min);

int main()
{
    int n;
    int arr[n]; // array
    int i, min, max;

    int len = sizeof(arr) / sizeof(arr[0]);
    printf("Enter elements: ");
    scanf("%d", &n);

    printf("length: %d\n", n);

    printf("Enter elements of the array: \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    maximum(arr, n, &max, &min); // send actual parameter to your function
    printf("max: %d\n,min: %d", max, min);
    return 0;
}

int maximum(int arr[], int N, int *max, int *min)
{
    *min = *max = arr[0];
    for (int j = 0; j < N; j++)
    {
        if (arr[j] > *max)
            *max = arr[j];
        if (arr[j] < *min)
            *min = arr[j];
    }
    return 0;
}
