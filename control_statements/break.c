
#include <stdio.h>

#if 0
 int main(){
    int n;
    while(n!=0){
        if(n<0)
        break;
        printf("enter the number: ");
        scanf("%d",&n);
    }
    return 0;
 }
# endif


// *******using both statements********


#if 0
int main(){
int i = -5;
while(i<=5){
    if(i==0)
        break;
        else{
       i++;
       continue;
        }
        printf("JSK");
    }
    return 0;
}
#endif