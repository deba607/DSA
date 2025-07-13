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
   while(ptr->next!=list)
   {
    printf("%d\n",ptr->data);
    ptr=ptr->next;
   }
   printf("%d\n",ptr->data);
}
void insert_bigin()
{
  // insert new node bigging
   new_node01=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data for the new node(begging): \n");
   scanf("%d",&new_node01->data);
   new_node01->prev=NULL;
   new_node01->next=NULL;
   ptr=list;
   while (ptr->next!=list)
   {
    ptr=ptr->next;
   }
   ptr->next=new_node01;
   new_node01->next=list;
   list->prev=new_node01;
   new_node01->prev=ptr;
   list=new_node01;
}
void insert_last()
{
    // insert new node last
   new_node02=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data for the new node(last): \n");
   scanf("%d",&new_node02->data);
   new_node02->next=NULL;
   new_node02->prev=NULL;
   ptr=list;
   while (ptr->next!=list)
   {
      ptr=ptr->next;
   }
   ptr->next=new_node02;
   new_node02->prev=ptr;
   new_node02->next=list;
   list->prev=new_node02;
   ptr=new_node02;
}
void insert_middle()
{
   // insert new node in middle position
   new_node03=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data for the new node(middle): \n");
   scanf("%d",&new_node03->data);
   printf("Enter the data where you insert the node: \n");
   scanf("%d",&value);
   new_node03->next=NULL;
   new_node03->prev=NULL;
   ptr=list;
   ptr1=list->next;
   while (ptr->data!=value)
   {
      ptr=ptr->next;
      ptr1=ptr1->next;
    }
    new_node03->next=ptr1;
    ptr1->prev=new_node03;
    ptr->next=new_node03;
    new_node03->prev=ptr;
    ptr=new_node03;
}
void delete_first()
{
    // Delete the  node bigging
    ptr=list;
    while (ptr->next!=list)
    {
        ptr=ptr->next;
    }
    ptr->next=list->next;
    list->next->prev=ptr;
    list=list->next;
}
void delete_last()
{
    // Delete node last 
   ptr=list;
   ptr1=list->next;
   while (ptr1->next!=list)
   {
      ptr1=ptr1->next;
      ptr=ptr->next;
   }
   ptr->next=list;
   list->prev=ptr;
}
void delete_middle()
{
    // Delete node in middle position
   printf("Enter the data of the node which you wnat to delete: ");
   scanf("%d",&num);
   ptr=list;
   ptr1=list->next;
   if(ptr->data==num)
   {
      list=ptr->next;
      while (ptr1->next!=list)
      {
        ptr1=ptr1->next;
      }
      ptr1->next=list;
      list->prev=ptr1;
       free(ptr);
   }
   else
   {
    while (ptr1->data!=num)
    {
      ptr=ptr->next;
      ptr1=ptr1->next;
    }
    ptr->next=ptr1->next;
    ptr1->next->prev=ptr;
    ptr=ptr->next;
   }
}
int main()
{
    printf("Enter the total number of node: \n");
    scanf("%d",&n);
    printf("Enter the data of node: \n");
    for(i=0;i<n;i++)
    {
            new_node=(struct node*)malloc(sizeof(struct node));
            scanf("%d",&new_node->data);
            new_node->next=NULL;
            if(list==NULL)
            {
                list=new_node;
                new_node->next=list;
                list->prev=new_node;
            }
            else
            {
                ptr=list;
                while(ptr->next!=list) ptr=ptr->next;
                ptr->next=new_node;
                new_node->prev=ptr;
                new_node->next=list;
                list->prev=new_node;
            }
   }
   printf("Original Doubly Linked List: \n");
   display();
   insert_bigin();
   printf("After Inserting First Node: \n");
   display();
   insert_last();
   printf("After Inserting Last Node: \n");
   display();
   /*insert_middle();
   printf("After Inserting Middile Node: \n");
   display();*/
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