#include<stdio.h>
int copy_array(int a[], int b[], int n, int i) 
{ 
    if (i < n) { 
        b[i] = a[i]; 
        copy_array(a, b, n, ++i); 
    } 
}
int swap1(int l1[],int n,int Ascending){
    int count=0,i,j,temp;
    for(i=0;i<(n-1);i++){
        for(j=0;j<n-i-1;j++){
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
    int n,i,t,t1;
    scanf("%d",&n);
    int l[n];
    int l1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&l[i]);
    }
    copy_array(l,l1,n,0);
    t=swap1(l,n,0);
    t1=swap1(l1,n,1);
    printf("%d",(t>t1)?t1:t);
    return 0;
}