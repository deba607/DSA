#include<stdio.h>
#include<math.h>
int main()
{
	int num,r[100],b,i,sum;
	printf("Enter any number: ");
	scanf("%d",&num);
	while(num!=0)
	{
	
	 for(i=0;i<=num;i++)
	  {
	    r[i]=num%10;
	    num=num/10;
	    b++; 
	  }
    }
	printf("So the number of your digit is: %d",b);
	printf("\nThe digits of your number are: ");
    for(i=0;i<b;i++)
     	printf(",%d",r[i]);
    while(i>=0)
    {
    	sum+=r[b-i]*pow(10,i);
    	i--;
	}
     	
     	
     	
printf("\nYour Reverse Number is: %d",sum);
return 0;
}
