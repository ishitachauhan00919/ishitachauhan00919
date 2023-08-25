#include <string.h>
#include <stdio.h>

int main()
{
	char s1[] = "Who are you?";
	char s2[] = "y"; /// if s2 points to a string with zero length, the function returns s1.
	char temp[20];
	char *p;

	p = strstr(s1, s2); // find first occurrence of s2 in s1

	printf("Enter your Name : ");

	gets(temp); // gets user input string

	printf("My Name is ");

	puts(temp); // print your output string.

	printf("\n\n");

	if (p)
	{
		printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p);
	}
	else
		printf("String not found\n");

	return 0;
}
