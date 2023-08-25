#include <stdio.h>

#if 0
int main() {

  int x[5] = {1, 2, 3, 4, 5};
  int* ptr;

  // ptr is assigned the address of the third element
  ptr = &x[2]; 

  printf("*ptr = %d \n", *ptr);   // 3
  printf("*(ptr+1) = %d \n", *(ptr+1)); // 4
  printf("*(ptr-1) = %d", *(ptr-1));  // 2

  return 0;
}
#endif






#if 1
void main()
{
    int i, x[6], sum = 0;
    printf("enter the number: ");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", x+i); // also equal to x+i;
        sum += *x+i;
        printf("sum: %d", sum);
    }
}
#endif





#if 0
 void add(int *p);

 void add(int *p){
    (*p)++;
 }

int main(){

    int i =10;
    int *p = &i;
    printf("%d\n",i);
    add(p);
    printf("%d",*p);
    return 0;

}
#endif


#if 0
int main(){
    int a[5]={9,2,3,4,9};
int(*p)[5] = &a;
printf("%d",**p);  

}
#endif


