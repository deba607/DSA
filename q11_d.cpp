#include<stdio.h>
int main()
{
    int num,i,j,a,b;
    printf("Enter any number");
    scanf("%d",&num);
    for(i=0; i<=num; i++)
    {
    	a=i+1;
        for(j=0; j<i; j++)
        {
           b=j+1;
            printf("%d",b); 
        }
     printf("\n");
    }
return 0;
}
