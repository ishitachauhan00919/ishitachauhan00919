#include <stdio.h>

# if 0
int main()
{
    int week = 7;
    printf("enter the days of num: ");
    scanf("%d", &week);
    switch (week)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf(" Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
 case 7:
        printf("Sunday");
        break;
    default:
        printf("Out of range");
        break;
    }
    return 0;
}
#endif




#if 0
int main()
{
    int i;
    for (i = 0; i < 20; i++)
    {
        switch ((i))
        {
        case 0:
            i += 5;
        case 1:
            i += 2;
        case 5:
            i += 5;
        default:
            i += 4;
        }
    printf("%d  ", i);
    }
    return 0;

}
#endif




