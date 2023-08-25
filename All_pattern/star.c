#include <stdio.h>

#if 0
int main(){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("*");
        }
        printf("\n");
    }
}
#endif


#if 1
int main()
{
    int n, i, j;
    printf("how many rows want in your pattern \n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
#endif



#if 0
int main(){
    int i,j,n;
    printf("enter the the num:  ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#endif



#if 0
int main(){
    int i,j,n;
    printf("enter the the num:  ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");

    }
    return 0;
}

#endif