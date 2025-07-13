#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
   
};
int main()
{
    struct node *new_node,*list=NULL,*ptr,*temp;
    int i,n,num;
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
        else
        {
            ptr=list;
            while (ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=new_node;
        }
    }
        ptr=list;
        if(ptr->next!=NULL && ptr!=NULL)
        {
            temp=ptr->next;
            ptr->next=ptr->next->next;
            free(temp);
            ptr=ptr->next;
        }

    ptr=list;
    while(ptr!=NULL)
    {
        printf("%u | %d | %u \n",ptr,ptr->data,ptr->next);
        ptr=ptr->next;
    }
   
}
