// To print the elements in reverse order in single linked list.
// Or linked list using stack.

#include<stdio.h>
#include<stdlib.h>
struct node *top=NULL,*new_node,*ptr;
int i,n,value,choice, m=1;
struct node
{
    int data;
    struct node *next;
};
void push()
{
    printf("Enter the data of the stack: \n");
    scanf("%d",&value);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=value;
    new_node->next=NULL;
    if(top==NULL) top=new_node;
    else{
        new_node->next=top;
        top=new_node;
    }
}
void pop()
{
    if(top==NULL) printf("Stack is underflow.");
    printf("Deleted value= %d\n",top->data);
    ptr=top;
    top=ptr->next;
    free(ptr);
}
void display()
{
    if(top==NULL) printf("Stack is empty.");
    else{
        while (top!=NULL)
        {
            printf("The data of your stack is: \n%d\t",top->data);
            top=top->next;
        }
    }
}
int main()
{
  while(m)
  {
  printf("\n1.Push \n2.Pop \n3.Display\n");
  scanf("\n%d",&choice);
	switch(choice)
	{
		case 1:
		{
			push();
			break;
		}
		case 2:
		{
			pop();
			break;
		}
		case 3:
		{
			display();
			break;
		}
		default:
		{
			printf("Enter a valid choice. Try again");
			m--;
		}
	}
}
    return 0;
}