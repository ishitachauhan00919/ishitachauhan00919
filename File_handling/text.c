#include <stdio.h>
#include <stdlib.h>

// read and write text file

int main(){ 
  FILE *file; 
file = fopen("E:\\S1.txt","w+");  
   fputs("This is book", file);  
    
   fseek( file, 8, SEEK_SET );  // set the beginning
   fputs("MY NOTEPAD", file);  
   fclose(file);  //close the file
}  
