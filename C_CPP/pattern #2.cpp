//   1
//  121  pattern
// 12321
#include<stdio.h>
int main()
{
	int num,q,k;
	printf("Enter any number: ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=num-i;j++)
		 printf(" ");
		for(k=1; k<=i; k++)
		 printf("%d",k);
		for(q=k-2;q>=1;q--)
		 printf("%d",q);
		
	printf("\n");	
	}
}
