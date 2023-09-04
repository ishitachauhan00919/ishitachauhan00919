#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //for string

int main() {

   char name[100];
   char *description;

   strcpy(name, "Tanu");

 
   description = malloc( 30 * sizeof(char) );
	
   if( description == NULL ) {
      printf(stderr, "Error - unable to allocate required memory\n");  //STANDARD ERROR MESSAGE
   } else {
      strcpy( description, " student ");
   }
	
   /* suppose you want to store bigger description */
   description = realloc( description, 100 * sizeof(char) );
	
   if( description == NULL ) {
      printf(stderr, "Error - unable to allocate required memory\n");
   } else {
      strcat( description, "She is in class 10th");
   }
   
   printf("Name = %s\n", name );
   printf("Description: %s\n", description );

   /* release memory using free() function */
   free(description);
}

