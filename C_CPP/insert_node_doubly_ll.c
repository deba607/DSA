#include<stdio.h>
#include<stdlib.h>
struct node *new_node,*list=NULL,*ptr,*ptr1,*new_node01,*new_node02,*new_node03;
int i,n,num,value;
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
void insert_bigin()
{
  // insert new node begaing
   new_node01=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data for the new node(begaing): ");
   scanf("%d",&new_node01->data);
   new_node01->next=NULL;
   new_node01->prev=NULL;
   new_node01->next=list;
   list->prev=new_node01;
   list=new_node01;
}
void insert_last()
{
    // insert new node last
   new_node02=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data for the new node(last): ");
   scanf("%d",&new_node02->data);
   new_node02->next=NULL;
   new_node02->prev=NULL;
   ptr=list;
   while (ptr->next!=NULL)
   {
      ptr=ptr->next;
   }
   ptr->next=new_node02;
   new_node02->prev=ptr;
   ptr=new_node02;
}
void insert_middle()
{
   // insert new node in middle position
   new_node03=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data for the new node(middle): ");
   scanf("%d",&new_node03->data);
   printf("Enter the data where you insert the node: ");
   scanf("%d",&value);
   ptr=list;
   ptr1=list->next;
   while (ptr->data!=value)
   {
      ptr=ptr->next;
      ptr1=ptr1->next;
    }
    ptr->next=new_node03;
    new_node03->next=ptr1;
    new_node03->prev=ptr;
    ptr1->prev=new_node03;
}
int main()
{
    printf("Enter the total number of node: ");
    scanf("%d",&n);
    printf("Enter the data of node: ");
    for(i=0;i<n;i++)
    {
            new_node=(struct node*)malloc(sizeof(struct node));
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
   printf("Original doubly linked list: \n");
   display();
   insert_bigin();
   printf("After inserting the first node: \n");
   display();
   insert_last();
   printf("After inserting the last node: \n");
   display();
   insert_middle();
   printf("After inserting the middle node: \n");
   display();
}