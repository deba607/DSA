#include<stdio.h>
int main()
{
	int i,n,t1=0,t2=1,t3;
	printf("Supply Any Number");
	scanf("%d",&n);
	printf("The Fivonacci Series is %d%d",t1,t2);
	for(i=1;i<=n;i++)
	{
		t3=t1+t2;
		printf("%d",t3);
		t1=t2;
		t2=t3;
	}
	return 0;
}
