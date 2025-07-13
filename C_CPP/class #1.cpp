#include<stdio.h>
int main()
{
	int n,i,sum=0,k=0,a;
	printf("Enter any number: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	   k=i*k;
	   a=1/k;
	   sum=sum+a;
	   k++;
	}
	printf("%d",sum);
	return 0;
} 
