#include <stdio.h>

 int main(){
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    if(n%2 == 0){
        printf("Number is even: %d",n);
    }else{
        printf("Number is odd: %d",n);
    }
    return 0;
 }
