#include<stdio.h>
#include<stdlib.h>
struct node *new_node,*list=NULL,*ptr,*ptr1,*new_node01,*new_node02,*new_node03;
int i,n,num,value,m=1;
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
    printf("Enter the queue element (Begining): \n");
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
        list=new_node;
    }
}
void insert_last()
{
    // insert new node last
   new_node02=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data for the queue(last): \n");
   scanf("%d",&new_node02->data);
   new_node02->next=NULL;
   if(list==NULL)
    {
        list=new_node02;
        new_node02->next=list;
    }
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
   if(list==NULL) insert_bigin();
   else{
   new_node03=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data for the queue(middle): \n");
   scanf("%d",&new_node03->data);
   new_node03->next=NULL;
   printf("Enter the element where you insert the queue element: \n");
   scanf("%d",&value);
   ptr=list;
   ptr1=list->next;
   while (ptr->data!=value)
   {
      ptr=ptr->next;
      ptr1=ptr1->next;
    }
    ptr->next=new_node03;
    new_node03->next=ptr1;
   }
}
void delete_first()
{
    // Delete the  node bigging
    if(list==NULL) printf("Your queue is empty. \n");
    ptr=list;
    while (ptr->next!=list)
    {
        ptr=ptr->next;
    }
    ptr->next=list->next;
    list=list->next;
    free(ptr);
}
void delete_last()
{
    // Delete node last 
   if(list==NULL) printf("Your queue is empty. \n");
   ptr=list;
   ptr1=list->next;
   while (ptr1->next!=list)
   {
      ptr1=ptr1->next;
      ptr=ptr->next;
   }
   ptr->next=list;
   free(ptr1);
}
void delete_middle()
{
    int count=0;
    // Delete node in middle position
   if(list==NULL) printf("Your queue is empty. \n");
   else{
   printf("Enter the data of the queue element which you wnat to delete: ");
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
    ptr=ptr1;
    free(ptr1);
   }
   // if(count==0) printf("Please Enter Existing Queue Element.\n");
   }
}
int main()
{
   int choice;
    printf("1. Insert Element Begining \n");
    printf("2. Insert Element Last \n");
    printf("3. Insert Element Middle \n");
    printf("4. Delete Element Begining \n");
    printf("5. Delete Element Last \n");
    printf("6. Delete Element Middle \n");
    printf("7. Display The Queue Element \n");
    while(m)
    {
        printf("Please enter a choice: \n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1: insert_bigin();
                break;
            case 2: insert_last();
                break;
            case 3: insert_middle();
                break;
            case 4: delete_first();
                break;
            case 5: delete_last();
                break;
            case 6: delete_middle();
                break;
            case 7: display();
                break;
            default:
                printf("Wrong Choice\n");
                m--;
        }
    }
}