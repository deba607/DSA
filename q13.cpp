#include<stdio.h>
int main()
{
	int n,i,a=0;
	printf("Enter any number: ");
	scanf("%d",&n);
	for(i=0;i<=n; i++)
	{
		a=a+i;
	}
  printf("%d",a);
  return 0;
}
