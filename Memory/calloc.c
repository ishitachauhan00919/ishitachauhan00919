#include <stdio.h>
#include <stdlib.h>

int main()
{
    // this pointer will hold the base address of created memory blocks
    int *ptr, n = 5;

    int size = sizeof(int);

  
    ptr = (int *)calloc(n, size);

    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {

        printf("Memory successfully allocated using calloc() function.\n");

        // Assigning values in the created array
        for (int i = 0; i < n; ++i)
        {
            ptr[i] = i + 1;
        }

        printf("The elements in the array ptr are: ");
        for (int i = 0; i < n; ++i)
        {
            printf("%d ", ptr[i]);
        }
    }

    return 0;
}
