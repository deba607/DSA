#include<stdio.h>
#include<stdlib.h>
struct node *new_node,*list=NULL,*ptr,*ptr1;
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
   display();
}