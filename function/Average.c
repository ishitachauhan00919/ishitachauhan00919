#include <stdio.h>

float avg(int, int);

float avg(int n, int n2)
{
  return (float)(n + n2) / 2;
}
int main()
{
  int n1, n2;
  printf(">> Enter the some nums: \n"); //
  scanf("%d%d", &n1, &n2);
  float z = avg(n1, n2);
  printf("Your Avg(%): %.5f", z);
  return 0;
}