// Solid Rectangle

#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter any number: ");
	scanf("%d",&n);
	for(i=1;i<n-1;i++)
	{
		for(j=n;j>=1;j--)
		{
			printf("*");
			printf(" ");
		}
	 printf("\n");
	}
 return 0;
}
