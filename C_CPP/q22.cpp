#include<stdio.h>
int main()
{
 int a,b[4];
 for(a=0;a<=4;a++)
 {
 	printf("Enter any number: ");
 	scanf("%d",&b[a]);
 }
 //printf("Your entered number is: ");
 //printf("%d",b[0]);
 for(a=0;a<=4;a++)
   printf("%d",b[a]);
   
if(b[0]>b[1])
  if(b[1]>b[2])
    if(b[2]>b[3])
       printf("%d",b[3]);
return 0;
}
