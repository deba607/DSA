
// Queue using array

#include<stdio.h>
#define n 10
int q[n],front=-1,rear=-1,value,m=1;
void enqueue()
{
    int value;
    if(rear==n-1) printf("Queue Overflow");
    else
    {
        if(front==-1){
        front=0;
        }
        else
        {
            printf("Insert the element into the queue: \n");
            scanf("%d",&value);
            rear=rear+1;
            q[rear]=value;
            
        }
    }
}
void dequeue()
{
    if(front==-1 || front>rear) printf("Queue Underflow");
    else{
        printf("Value deleted from queue: %d\n",q[front]);
        front=front+1;
    }
}
void display()
{
   int i;
   if(front==-1) printf("Queue is Empty");
   else for(i=front;i<=rear;i++) printf("%d\n",q[i]);
   
}
int main()
{
    int choice;
    printf("Please enter a choice: \n");
    while(m)
    {
        printf("1. Insert \n");
        printf("2. Delete \n");
        printf("3. Display \n");
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
                printf("Wrong Choice\n");
                m--;
            
        }
    }
}
