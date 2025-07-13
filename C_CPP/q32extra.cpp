#include<stdio.h>
int main()
{
	int num,r;
	printf("Enter any number: ");
	scanf("%d",&num);
	while(num>=16)
	{
		r=num%16;
		num=num/16;
		if(r>=10&&r<16)
		  r=r+65;
		
	}
	printf("%d",r);
	return 0;
}
