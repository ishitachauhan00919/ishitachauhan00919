#include <stdio.h>
#include <stdlib.h> // use stdlib.h header file to malloc() function
int main()
{
    int *ptr, size, i;  
      
    printf (" Enter the allocated size of memory ");  
    scanf (" %d", &size); // get the size of a memory     
    // use malloc() function to define the size of block in bytes  
    ptr = malloc (size * sizeof(int));    
   
    if (ptr != NULL)  
    {  
        
        printf (" Enter numbers from the user: ");        
        for ( i = 0; i < size; i++)  
        {  
            scanf (" %d", ptr + i); // stores the numbers from base address of memory  
        }         
        printf (" Numbers are stores in contiguous memory: \n ");         
        for ( i = 0; i < size; i++)  
        {  
            printf (" \n The number is: %d", ptr[i]); // here *(ptr + i) is same as ptr[i]  
        }  
        printf (" \n Memory is created using the malloc() function ");  
        return 0;  
    }  
    else  
    printf (" memory is not created ");  
    return 0;  
}