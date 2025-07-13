#include<stdio.h>
int main()
{
    int num,i,j,a;
	printf("Enter any number: ");
    scanf("%d",&num);
    for(i=0; i<num; i++)
    {
    	a=i+1;
        for(j=0; j<3; j++)
        {
          printf("%d",a);    	 
        }
     printf("\n");
    }
return 0;
}
