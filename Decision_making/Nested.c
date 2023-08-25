#include <stdio.h>  
int main()  
{  
   int n; 
   printf("Enter the value of n :"); 
   scanf("%d",&n); 
   
   for(int i=1;i<=n;i++)  // outer loop  
   {  
       for(int j=1;j<=10;j++)  // inner loop  
       {  
           printf("%d\t",(i*j)); // printing the value.  
       }  
       printf("\n");  
   }  
   return 0;
}


