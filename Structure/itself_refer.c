#include <stdio.h>
/// self -refrential structure pointer
//  single link self -refrential struct

struct node
{
   int data;
   struct node *next;
};

int main()
{

   struct node head; // initializ ( 3 objects)
   struct node second;
   struct node third;

   // Assign data to each node
   head.data = 1;
   second.data = 2;
   third.data = 3;

   // Link the nodes together
   head.next = &second;
   second.next = &third;
   third.next = NULL;

   // Traverse the linked list and display its contents
   struct node *current = &head; // current =1
   while (current != NULL)
   {
      printf("%d ", current->data); // 1
      current = current->next;      // 1=next(2),3
   }

   return 0;
}