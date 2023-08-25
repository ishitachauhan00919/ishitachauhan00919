#include <stdio.h>

#if 0
int main() {
  int myNumbers[] = {25, 50, 75, 100};
  int i;
  
  for (i = 0; i < 4; i++) {
    printf("%d\n", myNumbers[i]);
  }
 
  return 0;
}
#endif






int main()
{

    int marks[10], i, n, sum = 0;
    double average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &marks[i]);

        sum += marks[i];
    }
    printf(">> sum : %d\n", sum);

    average = sum / n;

    printf(">> Average = %.lf", average);

    return 0;
}