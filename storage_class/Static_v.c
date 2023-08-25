#include <stdio.h>
    static int count =1;
  static int count2 =8;

int fun1(){
    count++;
    return count;
}

int fun2(){
    count2--;
    return count2;

}
 int main(){
    printf("my num is: %d",fun1());
    printf("\nmy num is: %d",fun2());
    return 0;
 }