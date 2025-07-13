
#include<stdio.h>
#include<stdlib.h>
struct node *new_node,*list=NULL,*ptr,*prev_node,*current_node,*next_node;
int i,n,num;
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
void reverse()
{
    prev_node=NULL;
    current_node=list;
    next_node=list;
    while (next_node!=NULL)
    {
        next_node=next_node->next;
        current_node->next=prev_node;
        prev_node=current_node;
        current_node=next_node;
    }
    list=prev_node;
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
   printf("Original linked list: \n");
   display();
   reverse();
   printf("Reverse linked list: \n");
   display();
}