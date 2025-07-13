#include<stdio.h>
#include<stdlib.h>
struct node *new_node,*list=NULL,*ptr,*ptr1,*new_node01,*new_node02,*new_node03,*new_node04;
int i,n,num,value;
struct node
{
    int data;
    struct node *next;
   
};
void display()
{
   ptr=list;
   while(ptr!=NULL)
   {
    printf("%u | %d | %u \n",ptr,ptr->data,ptr->next);
    ptr=ptr->next;
   }
}
void insert_bigin()
{
  // insert new node bigging
   new_node01=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data for the new node(begging): ");
   scanf("%d",&new_node01->data);
   new_node01->next=list;
   list=new_node01;
}
void insert_last()
{
    // insert new node last
   new_node02=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data for the new node(last): ");
   scanf("%d",&new_node02->data);
   new_node02->next=NULL;
   ptr=list;
   while (ptr->next!=NULL)
   {
      ptr=ptr->next;
   }
   ptr->next=new_node02;
}
void insert_middle()
{
   // insert new node in middle position
   new_node03=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data for the new node(middle): ");
   scanf("%d",&new_node03->data);
   printf("Enter the data where you insert the node: ");
   scanf("%d",&num);
   ptr=list;
   while (ptr->next!=NULL)
   {
      if(ptr->data==num)
      {
        new_node03->next=ptr->next;
        ptr->next=new_node03;
      }
      ptr=ptr->next;
    }
}
void insert_middle_another()
{
   // insert new node in middle position
   new_node04=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data for the new node(middle_another): ");
   scanf("%d",&new_node04->data);
   printf("Enter the data where you insert the node: ");
   scanf("%d",&value);
   ptr=list;
   ptr1=list->next;
   while (ptr->data!=value)
   {
      ptr=ptr->next;
      ptr1=ptr1->next;
    }
    ptr->next=new_node04;
    new_node04->next=ptr1;
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
            ptr->next=new_node;
        }
   }
   insert_bigin();
   display();
   insert_last();
   display();
   insert_middle();
   display();
   insert_middle_another();
   display();
}