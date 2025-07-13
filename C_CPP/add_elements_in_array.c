#include<stdio.h>
int main()
{
    int arr[200],n,num,pos,i;
    printf("Enter how many number you want to store: \n");
    scanf("%d",&n);
    printf("Enter the numbers: \n");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter the array elements: ");
    scanf("%d",&num);
    printf("Enter the position: \n");
    scanf("%d",&pos);
    
    
    for(i=n;i>pos;i--) arr[i]=arr[i-1];
    arr[i]=num;

    printf("Print the numbers: \n");
    for(i=0;i<=n;i++) printf("%d\n",arr[i]);
}