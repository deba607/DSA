// Queue Using Linked List
#include<stdio.h>
#include<stdlib.h>
struct node *list=NULL,*ptr,*ptr1,*new_node02;
int i,n,num,value,m=1;
struct node
{
    int data;
    struct node *next;
   
};
void display()
{
	if(list==NULL)
		printf("Queue is empty.");
	else
	{
	   ptr=list;
	   while(ptr!=NULL)
	   {
	    printf("%u | %d | %u \n",ptr,ptr->data,ptr->next);
	    ptr=ptr->next;
	   }
   }
}
void enqueue()
{
    // Insert the data in queue
   new_node02=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data queue: \n");
   scanf("%d",&new_node02->data);
   new_node02->next=NULL;
    if(list==NULL)
        {
            list=new_node02;
        }
        else{
            ptr=list;
            while (ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=new_node02;
        }
}
void dequeue()
{
    // Delete the data in queue
    ptr=list;
    printf("The deleted data is: %d\n",ptr->data);
    list=ptr->next;
    free(ptr);
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


