#include<stdio.h>
#include<stdlib.h>
struct node *new_node,*list=NULL,*ptr,*ptr1,*temp,*n1;
int i,n,num;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
   
};
void display()
{
   ptr=list;
   while(ptr!=NULL)
   {
    printf("%u | %d | %u | %d | %u \n",ptr->prev,ptr->data,ptr,ptr->data,ptr->next);
    ptr=ptr->next;
   }
}
void delete_first()
{
    // Delete the  node bigging
    ptr=list;
    list=ptr->next;
    list->prev=NULL;
    free(ptr);
}
void delete_last()
{
    // Delete node last 
   ptr=list;
   while (ptr->next!=NULL)
   {
      n1=ptr;
      ptr=ptr->next;
   }
   n1->next=NULL;
   free(ptr);
}
void delete_middle()
{
    // Delete node in middle position
   printf("Enter the data of the node which you wnat to delete: ");
   scanf("%d",&num);
   ptr=list;
   if(ptr->data==num)
   {
      list=ptr->next;
      list->prev=NULL;
       free(ptr);
   }
   else
   {
    ptr1=list->next;
    while (ptr1->data!=num)
    {
      ptr=ptr->next;
      ptr1=ptr1->next;
    }
    ptr->next=ptr1->next;
    ptr1->next->prev=ptr;
    free(ptr1);
   }
}
int main()
{
    printf("Enter the total number of node: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
            new_node=(struct node*)malloc(sizeof(struct node));
            printf("Enter the data of node: ");
            scanf("%d",&new_node->data);
            new_node->next=NULL;
            new_node->prev=NULL;
        
        if(list==NULL)
        {
            list=new_node;
        }
        else{
            ptr=list;
            while (ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            new_node->prev=ptr;
            ptr->next=new_node;
        }
   }
    printf("Original linked list: \n");
    display();
    delete_first();
    printf("After deleting first node: \n");
    display();
    delete_last();
    printf("After deleting the last node: \n");
    display();
    delete_middle();
    printf("After deleting the middle node: \n");
    display();
}