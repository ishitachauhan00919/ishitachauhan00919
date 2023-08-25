#include <stdio.h>

// *******ADD TWO NUM******
#if 0
int main()
{
    int n, k;
    printf("enter the two num:  ");
    scanf("%d %d", &n, &k);

    while (k != 0)
    {
        n++;   // n is increment 3,4,5,6,7,
        k--;   // k is decerement 4,3,2,1,   
    }
    printf("sum : %d", n);    //  sum 7 + 1 = 8.
    return 0;
}
#endif



#if 1
int main(){
    int x,y,sum,carry;
    printf("enter the two num: ");
    scanf("%d%d",&x,&y);

    while(y!=0){
        sum = x^y;     //5 ->0101,10 ->1010 = ^1111
        carry= (x&y)<<1;
        x=sum;
        y=carry;
    }
    printf("sum : %d",x);
    return 0;
}
#endif