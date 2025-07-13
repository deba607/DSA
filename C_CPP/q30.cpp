#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	long r,r1,i;
	
	printf("Enter the value of a b c: ");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		r=(-b+sqrt(d))/2*a;
		i=(-b-sqrt(d))/2*a;
		printf("\nThe Real Root is: %d",r);
		printf("\nThe Imaginary Root is: %d",i);
	}
	else if(d=0)
	{
	   r1=-b/2*a;
	   printf("\nRoots are equal and those are: %d",r1);
    }
    else
      printf("Roots are immaginary");
return 0;
}
