#include <stdio.h>
int main(){
    int n,rem,temp;
    printf("enter the binary: ");
    scanf("%d",&n);
    int decimal =0,base = 1;
    temp = n;
    while(n!=0){
        int rem = n%10;
        decimal = decimal+rem*base;
        n =n/10;
        base = base*2;

    }
    printf("Decimal num: %d",decimal);

return 0;
}