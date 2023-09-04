// #include <stdio.h>
#include <conio.h>  //getch predefined function so..that is defined


int main()
{
    FILE *fp;
    char c;
    fp = fopen("E:\\S1.txt", "r");  //read mode 

    while ((c = fgetc(fp)) != EOF)   //get the next char from specified stream 
    {
        printf("%c", c);
    }
    getch(); // read character from my s1.txt file

    fclose(fp);
    return 0;
}