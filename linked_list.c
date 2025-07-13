#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
   
};

int main()
{
    struct node *first_node;
    first_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data for the first node: ");
    scanf("%d",&first_node->data);
    
   // first_node->next=second_node;
    //printf("%d",first_node->data);
    
    
    struct node *second_node;
    second_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data for the second node: ");
    scanf("%d",&second_node->data);
    //second_node->next=NULL;
    first_node->next=second_node;
   // printf("%d\n",second_node->data);

   struct node *third_node;
    third_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data for the third node: ");
    scanf("%d",&third_node->data);
    third_node->next=NULL;
    second_node->next=third_node;


   struct node *ptr;
   ptr=first_node;
   while(ptr!=NULL)
   {
    printf("%u | %d | %u \n",ptr,ptr->data,ptr->next);
    ptr=ptr->next;
   }
}
