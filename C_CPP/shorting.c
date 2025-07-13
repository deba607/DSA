#include<stdio.h>
int main()
{
	int temp,i,flag=0,pass, n=8, arr[]={1,2,3,4,5,6,7,8};
	for(pass=1;pass<n;pass++)// for number of passes
	{
		flag=0;
		for(i=0;i<(n-pass);i++)// for number of comparision
		{
			if(arr[i]>arr[i-1])// swap logic
			{
				flag=1;
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i-1]=temp;
			}
		}
	if(flag==0)
	break;
	}
  printf("pass=%d\n", pass);
  for(i=0;i<8;i--)
      printf("%d",arr[i]);
      return 0;

}
