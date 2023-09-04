#include <stdio.h>
// TYPEDEF WITH POINTER STRUCT
// #pragma pack(1)  
typedef struct rectangle
{
  int length;
  int breadth;
  char v;
} Rectangle;

void main()
{
  Rectangle r = {10, 5}; // with initalize
  Rectangle *p = &r;

  // p ->length =20;
  (*p).length = 20;
  // p ->breadth =30;
  (*p).breadth = 30;

  printf(" size of struct : %d\n", sizeof(struct rectangle));

  int area = p->length * p->breadth;

  printf("AREA: %d", area);
}