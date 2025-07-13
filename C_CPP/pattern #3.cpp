// A
// AB
// ABC  pattern
// ABCD
// ABCDE
#include<stdio.h>
int main()
{
	int num,i,j;
	char ch;
	printf("Enter any number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1,ch='A';j<=i;j++,ch++)
	       printf("%c",ch);
	printf("\n");
	}
	
	return 0;
} 
