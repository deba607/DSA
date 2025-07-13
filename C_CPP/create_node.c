#include<stdio.h>
#include<stdlib.h>
struct node *new_node,*list=NULL,*ptr,*new_node01,*new_node02,*new_node03;
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
int main()
{
    int i,n,num;
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
   display();
}