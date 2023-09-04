#include <stdio.h>
#pragma pack(1)
struct student
{
    int roll_no;
    char name[10];
};
union student1
{
    int roll_no;
    char name[10];
    float fees;
};
int main()
{
    struct student s;
    union student1 s1;

    s1.fees = 1200;
    s1.roll_no = 56;  //only one union member can be accessed at a time .

    printf("size of struct s: %d\n", sizeof(s));
    printf("size of union s1: %d\n", sizeof(s1));
    printf("student fees: %f\n", s1.fees);
    return 0;
}
