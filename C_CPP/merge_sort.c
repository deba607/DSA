#include<stdio.h>
void merge_sort(int *arr,int n){
    if(n<2) return;
    int ls=n/2;
    int rs=n-ls;
    int left_array[ls], right_array[rs],i;
    for(i=0;i<ls;i++) left_array[i]=arr[i];
    for(i=ls;i<n;i++) right_array[i-ls]=arr[i];
    merge_sort(left_array,ls);
    merge_sort(right_array,rs);
    merge(arr,left_array,ls,right_array,rs);

}