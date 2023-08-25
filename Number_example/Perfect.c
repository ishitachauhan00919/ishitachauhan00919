#include <stdio.h>
int main(){
    int n,sum = 0,i=1;
    printf("enter the num: ");
    scanf("%d",&n);

    while(i<n){
        if(n%i==0)
            sum = sum+i;
            i++;

    }
if(sum == n){
    printf("perfect num");
}else{
    printf("not a perfect num");
}
return 0;
}