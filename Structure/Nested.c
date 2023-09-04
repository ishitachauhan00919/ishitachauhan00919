#include <stdio.h>

// seprated nested loop add,st;

struct address
{
    int house_no;
    char street[20];
    int pincode;
};
struct student
{
    char name[30];
    int roll;
    struct address add; // Nested structure
} st;

int main()
{

    printf("Enter name and roll number of student:\n");
    scanf("%s%d", st.name, &st.roll);
    printf("Enter street name, house number and pincode number:\n");
    scanf("%s%d%d", st.add.street, &st.add.house_no, &st.add.pincode);
    printf("\n\n\tStudent detail is:\n");
    printf("Name: %s\nRoll: %d\n", st.name, st.roll);
    printf("Address:%s\nHouse no.- %d\nstate: %d", st.add.street, st.add.house_no, st.add.pincode);

    return 0;
}