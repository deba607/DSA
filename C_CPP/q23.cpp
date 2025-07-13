#include<stdio.h>
int main()
{
	int num,sum=1;
	printf("Enter any number: ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	  sum=sum*i;
	printf("The factorial of your number is: %d",sum);
	return 0;
} 
