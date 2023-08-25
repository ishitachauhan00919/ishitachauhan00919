#include <stdio.h>
int main(){
    int base,exponent,temp=0,power=1;
    printf("enter the base: ");
    scanf("%d",&base);
    printf("enter the exponent: ");
    scanf("%d",&exponent);

    // temp = exponent;

    while(exponent!=0){
        power = power*base;
        exponent--;
    }
    printf("power of : %d",power);

    return 0;
}