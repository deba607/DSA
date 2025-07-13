#include<stdio.h>
int main()
{
	float num,i,sum=0,k=1,a;
	printf("Enter any number: ");
	scanf("%f",&num);
	
	for(i=1;i<=num;i++)
	{
		k=k*i;
		a=i/k;
	   sum=sum+a;
	}
 printf("%f",sum);
 return 0;
}
