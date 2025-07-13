#include<stdio.h>
int main()
{
  int arr[]={6,9,8,1,5};
  printf("Unsorted array: ");
  for(int i=0;i<5;i++)
    printf("%d",arr[i]);
//selection sort
  for(int i=0;i<4;i++)  // n-1 passes
  {
    int index=i;
    for(int j=i+1;j<5;j++)
    {
      if(arr[j]<arr[index])
        {
          index=j;
        }
       }
       // swap the min and first element of unsorted array part
       // swap minidx and i
       int temp=arr[i];
       arr[i]=arr[index];
       arr[index]=temp;
    }
    printf("\nSorted array: ");
    for(int i=0;i<5;i++)
    {
      printf("%d",arr[i]);
    }

}