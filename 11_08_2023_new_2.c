#include<stdio.h>
int main()
{
	int min=1,max=1,a[100],n,i,x=0;
	printf("Enter how many no you want to store: ");
	scanf("%d",&n);
	printf("Enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x>=1 && x<=100)
		{
		   a[i]=x;
		}
		else
		{
			printf("Value out of range");
		}
    }
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
			if(max<a[i])
		{
			max=a[i];
		}
	}	
int d=max-min;
printf("No of operations: %d",d);

return 0;
}
