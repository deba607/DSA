// Queue Using Linked List
#include<stdio.h>
#include<stdlib.h>
struct node *list=NULL,*ptr,*ptr1,*new_node;
int i,n,num,value,m=1;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
   
};
void display()
{
    if(list==NULL) printf("Queue is empty.");
   ptr=list;
   while(ptr->next!=list)
   {
    printf("%d\n",ptr->data);
    ptr=ptr->next;
   }
   printf("%d\n",ptr->data);
}
void enqueue()
{
    // Insert the data in queue
  
            new_node=(struct node*)malloc(sizeof(struct node));
            printf("Enter the data of the queue: \n");
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
void dequeue()
{
    // Delete the data in queue
    ptr=list;
    printf("The deleted data is: %d\n",ptr->data);
    while (ptr->next!=list)
    {
        ptr=ptr->next;
    }
    ptr->next=list->next;
    list->next->prev=ptr;
    list=list->next;
}

int main()
{
    int choice;
    
    while(m)
    {
        printf("1. Insert \n");
        printf("2. Delete \n");
        printf("3. Display \n");
        printf("Please enter a choice: \n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1: enqueue();
                break;
            case 2: dequeue();
                break;
            case 3: display();
                break;
            default:
            	printf("Please enter right choice: \n");
            	m--;
        }
    }
}


