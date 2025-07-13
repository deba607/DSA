#include<stdio.h>
#include<stdlib.h>
struct node *new_node,*list=NULL,*ptr,*ptr1,*new_node01,*new_node02,*new_node03;
int i,n,num,value;
struct node
{
    int data;
    struct node *next;
   
};
void display()
{
   ptr=list;
   while(ptr->next!=list)
   {
    printf("%u | %d | %u \n",ptr,ptr->data,ptr->next);
    ptr=ptr->next;
   }
   printf("%u | %d | %u \n",ptr,ptr->data,ptr->next);
}
void insert_bigin()
{
  // insert new node bigging
   new_node01=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data for the new node(begging): \n");
   scanf("%d",&new_node01->data);
   ptr=list;
   while (ptr->next!=list)
   {
    ptr=ptr->next;
   }
   ptr->next=new_node01;
   new_node01->next=list;
   list=new_node01;
}
void insert_last()
{
    // insert new node last
   new_node02=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data for the new node(last): \n");
   scanf("%d",&new_node02->data);
   new_node02->next=NULL;
   ptr=list;
   while (ptr->next!=list)
   {
      ptr=ptr->next;
   }
   ptr->next=new_node02;
   new_node02->next=list;
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
   ptr=list;
   ptr1=list->next;
   while (ptr->data!=value)
   {
      ptr=ptr->next;
      ptr1=ptr1->next;
    }
    new_node03->next=ptr1;
    ptr->next=new_node03;
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
            }
            else
            {
                ptr=list;
                while(ptr->next!=list) ptr=ptr->next;
                ptr->next=new_node;
                new_node->next=list;
            }
   }
   printf("Original Singly Linked List: \n");
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