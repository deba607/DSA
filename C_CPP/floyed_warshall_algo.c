#include<stdio.h>
#include<stdlib.h>

int n;

float min(int a,int b){
    if(a<b) return a;
    else return b;
}

int main(){
    printf("Enter the size of the matrix: \n");
    scanf("%d",&n);
    int cost[n][n]; int a[n][n];
    printf("Enter the cost of the martix: \n");
    for(int i=0 ;i<n ;i++) for(int j=0 ;j<n ;j++) scanf("%d", &cost[i][j]);

    printf("Original Matrix: \n");
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j < n; j++) printf("%d\t", cost[i][j]);
        printf("\n");
    }
    // copy cost to a matrix
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) a[i][j]=cost[i][j];
    // Main algorithm executed
    for(int k=0;k<n;k++)for(int i=0;i<n;i++) for(int j=0;j<n;j++) a[i][j]=min(a[i][j],(a[i][k]+a[k][j]));

    printf("Output Matrix: \n");
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j < n; j++) printf("%d\t", a[i][j]);
        printf("\n");
    }

} 




