#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("Enter any number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		  count++;
	}
	if(count==2)
	 printf("Prime Number");
	else
	 printf("Not a Prime Number");
 return 0;
}
