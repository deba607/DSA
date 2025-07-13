#include<stdio.h>
int main()
{
	int num,i,sum=0;
	printf("Enter any number: ");
	scanf("%d",&num);
	printf("The divisible prime numbers are: \n");
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			int count=0;
			for(int j=1;j<=i;j++)
			{
				if(i%j==0)
					count++;
			}
			if(count==2)
			{
				sum=sum+i;
				printf("%d\n",i);
			}
        }
	}
printf("The sum of the prime numbers are: %d\n",sum);
 return 0;
}