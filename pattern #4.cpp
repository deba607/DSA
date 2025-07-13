//   1
//  123  pattern
// 12345
#include<stdio.h>
int main()
{
	int num,k;
	printf("Enter any Number: ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=num-i;j++)
	    	printf(" ");
	    for(k=1;k<=i;k++)
	        printf("%d",k);
	    for(int q=k+2;q<=1;q++)
	       printf("%d",q);
	    printf("\n");
	    
	}
	return 0;
	  
	
}
