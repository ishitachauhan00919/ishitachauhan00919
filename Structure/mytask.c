#include <stdio.h>
struct student
{
    int roll_num;
    char name[10];
    int fees;
    char city[10];
    int count;

} s[5];

int main()
{
    printf(">> Enter Information of students <<\n");
    for (int i = 0; i < 5; i++)
    {
        s[i].count = i + 1;
        printf("COUNT: %d\n", s[i].count);

        printf("Enter your Name: ");
        scanf("%s", s[i].name);

        printf("Enter your Roll_no: ");
        scanf("%d", &s[i].roll_num);

        printf("Enter fees: ");
        scanf("%d", &s[i].fees);
        printf("Enter your CityName: \n");
        scanf("%s", s[i].city);
    }
    printf("\t****Student List****\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Name: ");
        puts(s[i].name);
        printf("Roll_No: %d\n", s[i].roll_num);
        printf("Fees: %d\n", s[i].fees);
        printf("City Name: ");
        puts(s[i].city);
    }
    return 0;
}