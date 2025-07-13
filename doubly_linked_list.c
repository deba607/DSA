#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *n1,*n2,*n3,*ptr;

int main()
{
    // First node
   n1=(struct node*)malloc(sizeof(struct node));
   n1->data=10;
   n1->prev=NULL;

   // Second node
   n2=(struct node*)malloc(sizeof(struct node));
   n2->data=20;
   n2->prev=n1;
   n1->next=n2;

   // Third node
   n3=(struct node*)malloc(sizeof(struct node));
   n3->data=30;
   n3->prev=n2;
   n2->next=n3;
   n3->next=NULL;

   // Display
   ptr=n1;
   while (ptr!=NULL)
   {
    printf("%d\t",ptr->data);
    ptr=ptr->next;
   }
   
}