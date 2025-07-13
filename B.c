#include<stdio.h>
int swap(int* l1,int n,int Ascending){
    int count=0,i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;i++){
            if(Ascending==1){
                if(l1[j]>l1[j+1]){
                    temp=l1[j];
                    l1[j]=l1[j+1];
                    l1[j+1]=temp;
                    count+=1;
                }
            }
            else{
                if(l1[j]<l1[j+1]){
                    temp=l1[j];
                    l1[j]=l1[j+1];
                    l1[j+1]=temp;
                    count+=1;
            }
            }
        }
    }
    return count;
}
int main(){
    int n,i;
    scanf("%d",&n);
    int l[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&l[i]);
    }
    if(l[0]>l[n-1]){
        printf("%d",swap(l,n,0));
    }
    else{
        printf("%d",swap(l,n,1));
    }
    return 0;
}