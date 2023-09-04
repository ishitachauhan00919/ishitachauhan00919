#include <stdio.h>

typedef student // structure tag
{
    char name[6]; // student members
    int roll_no;
    float fees;
    float var;

    
} s;

void main()
{
    // printf("Enter your Name:");
    // gets(s.name); // user input name.
    // scanf("%d", &s.roll_no);    //access member .s
    // s.fees =5500;    // assign value to other s variable 

    // printf("*****Student Details*****\n");
    // printf("Name:  %s\n", s.name);
    // printf("Roll_No:%d\n", s.roll_no);
    // printf("Fees: %f\n", s.fees);
    printf(" size of struct : %d\n",sizeof(struct student));
}




//****Another method declare****


// struct student // structure tag
// {
//     char name[30]; // student members
//     int roll_no;
//     float fees;
// };
// void main()
// {
//     struct student s; //  variable have to use struct keyword

//     printf("Enter your Name:");
//     gets(s.name); // user input name.
//     scanf("%d", &s.roll_no);
//     scanf("%f", &s.fees);

//     printf("*****Student Details*****");

//     printf("\n1> Name:  %s\n", s.name);
//     printf("2> Roll_No:%d\n", s.roll_no);
//     printf("3> Fees: %f\n", s.fees);
// }
