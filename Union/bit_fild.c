// #include <stdio.h>

// struct case_1
// {
//     int a : 4;
//     unsigned int b : 5;
//     unsigned int c : 5;
//     unsigned int d : 8;
//     unsigned int e : 3;
//     unsigned int f : 8;
// };

// struct case_2
// {
//     unsigned b1 : 5;
//     unsigned : 0; // start a new unsigned int
//     unsigned  : 6;  //name is optional
//     unsigned b3 : 15;
// };

// int main()
// {
//     printf("Size of structure without forced alignment is: %u bytes\n", sizeof(struct case_1));
//     printf("Size of structure with forced alignment is: %u bytes\n", sizeof(struct case_2));
//     return 0;
// }

#include <stdio.h>
int main( ) {

   char str[100];

   printf( "Enter a value :");
   gets( str );

   printf( "\nYou entered: ");
   puts( str );

   return 0;
}