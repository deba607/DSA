#include<stdio.h>
#include <stdlib.h>
int fact(int n){
    if(n<2) return 1;
    else return n*fact(n-1);
}
int main()
{
   int number;
   printf("Enter a number: ");
   scanf("%d",&number);
   if(number<0){
        printf("Please enter a valid number");
        exit(0);
    }
   printf("%d! = %d\n",number,fact(number));
   return 0;
}