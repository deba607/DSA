#include<stdio.h>
int main(){
   int a[100],l=0,h,val,count=0;
   printf("How many number you want to store(<100): \n");
   scanf("%d",&h);
   printf("Enter the numbers: \n");
   for (int i=0;i<h;i++) scanf("%d",&a[i]);
   printf("Enter the searching element: \n");
   scanf("%d",&val);
   int m=((l+h)/2);
   for(int i=0;i<h;i++){
    if(a[m]==val) count++;
    else if(a[m]<val) l=m+1;
    else h=m-1;
   }
   if(count!=0) printf("Searching element found %d index number",m);
   else printf("Searching element not found");
   return 0;
}