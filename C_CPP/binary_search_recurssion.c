#include<stdio.h>
int a[100],l=1,h,val,count=0,i;
int bin_search(int a[],int l,int h,int val){
    if(l==h) {
        if(val==a[l]) return l;
    }
    else{
    int m=((l+h)/2);
    if(val==a[m]) return m;
    else if(a[m]>val) return bin_search(a,l,m-1,val);
    else return bin_search(a,m+1,h,val);
   }
    return 0;
   }


int main(void){
   
   printf("How many number you want to store(<100): \n");
   scanf("%d",&h);
   printf("Enter the numbers: \n");
   for (int i=1;i<=h;i++) scanf("%d",&a[i]);
   printf("Enter the searching element: \n");
   scanf("%d",&val);
   int index=bin_search(a,l,h,val);

   if(index!=0) printf("Searching element found %d index number",index);
   else printf("Searching element not found");
   return 0;
}