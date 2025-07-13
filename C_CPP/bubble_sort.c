#include<stdio.h>
int main()
{
    int temp;
    int arr[5];
    printf("Enter any 5 numbers: \n");
    for(int i=0;i<5;i++)
      scanf("%d",&arr[i]);
    printf("Before sorting: \n");
    for(int i=0;i<5;i++)
      printf("%d\n",arr[i]);
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4-i;j++)
        {
           if(arr[j]>arr[j+1])
            {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
            }
        }
          
    }
    printf("\nAfter sorting: \n");
    for(int i=0;i<5;i++)
      printf("%d\n",arr[i]);
    return 0;
}