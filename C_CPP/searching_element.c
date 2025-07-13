# include<stdio.h>
int main(){
    int i,n,search,arr[100],count=0,pos;
    printf("Enter no of elements you entered: ");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter element to search: ");
    scanf("%d",&search);
    for(i=0;i<n;i++){
    if(arr[i]==search){count++;
    pos=i+1;}
    }
    if(count==1) printf("Searching element found at %d position",pos);
    else printf("Searching element not found");
}