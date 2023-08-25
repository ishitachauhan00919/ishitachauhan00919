#include<stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("enter the num: ");
    scanf("%d",&n);
    int temp = n;

while(n>0){
    int r = n%10;
     sum =(sum*10)+r;
     n = n/10;
     printf("sum : %d\n",sum);

}
     printf("t : %d\n",temp);

if(temp == sum){

    printf("num is palindrom");
}else{
    printf("this num is not palindrome");
}

return 0;
}
