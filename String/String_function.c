#include <stdio.h>
#include <string.h> //  using string library

// In this code user input the string
// String handling functions
int main()
{
    char str[50];
    char st2[] = {"Hello"};
    char st3[] = {"hello#...JSK"};
    char chr = '#';

    printf("Enter: ");
    scanf(" %s", str); // User input the string.

    printf("Length: %d\n", strlen(str)); // Total length of the char.

    printf("Received: %s\n", str); // output string

    strcat(str, st2); /// Add two string
    printf("Add: %s\n", str);

    printf("Comapre: %d\n", strcmp(st2, st3)); // compare with st3 one by one char.
    // it returns 0 ,if two strings are equal.

    strcpy(str, st2); /// Copy st2 to str
    printf("Copy: %s\n", str);

    char *target = strdup(st2); // pointer to copy is returned.
    printf("pointer_c : %s\n", target);

    strset(st2, chr);  //which set the character '#' to the string variable str.
    printf("Replaced(#): %s\n", st2);

   char *ret = strrchr(st3, chr);  //This function returns a pointer to the last occurrence of character in str.
   printf("String after |%c| is - |%s|\n", chr, ret);


    return 0;
}
