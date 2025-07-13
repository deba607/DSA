// Amstrong Number
#include<stdio.h>
#include<math.h>
int main()
{
	int number,n,r,sum=0,num;
	printf("\n Enter any number ");
	scanf("%d",&number);
	printf("\n Enter the number of digit: ");
	scanf("%d",&n);
	num=number;
	while(num!=0)
	{
		r=num%10;
		num=num/10;
		sum+=pow(r,n);
	}
	if(sum==number)
	{
		printf("\n Amstrong Number");
	}
	else
	{
		printf("\n Not a Amstrong Number");
	}
	return 0;
}
