#include<stdio.h>
int top=-1,stack[5],num,i,choice,m=1;
void push(int n)
{
	int a;
	printf("Enter the element to be pushed:");
	scanf("%d",&a);
	if(top==(n-1))
	{
		printf("Overflow");
	}
	else
	{
		top++;
		stack[top]=a;
		
	}
}
void pop()
{
	
	if(top==-1)
	{
		printf("Underflow");
	}
	else
	{
		printf("The deleted item is :%d",stack[top]);
		top--;
	}
}
void display()
{
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
	  for(i=top;i>=0;i--)
		{
			printf("%d\t",stack[i]);
		}
	}
}
int main()
{
  printf("\nEnter how many no you wnat to store: ");
  scanf("%d",&num);
  printf("\nStack operations using array");
  while(m){
  printf("\n1.Push \n2.Pop \n3.Display\n");
  scanf("\n%d",&choice);
	switch(choice)
	{
		case 1:
		{
			push(num);
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
}
	

		
		
    	
