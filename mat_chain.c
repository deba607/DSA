#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    // int a1[n-2];
    // for(int i=0;i<n-2;i++) a1[i]=a[i]*a[i+1]*a[i+2];

    // //for(int i=0;i<n-2;i++)  printf("%d\t",a1[i]);
    // int a2[n-2-1];


    int m[n-1][n-1], s[n-1][n-1];
    int j,min,q;
    for(int d=1;d<n-1;d++){
        for(int i=1;i<n-d;i++){
            j=i+d;
            for(int k=i;k<=j-1;k++){
                q=m[i][k]+m[k+1][j]+a[i-1]*a[k]*a[j];
                if(q<min){
                    min=q;
                    s[i][j]=k;
                }
                m[i][j]=min;
            }
        }
    }
    printf("The matrix is: \n");
    for(int i=0;i<n-1;i++){
        for(int d=0;d<n-1;d++) printf("%d\t",m[i][j]);
        printf("\n");
    }

    for(int i=0;i<n-1;i++){
        for(int d=0;d<n-1;d++) printf("%d\t",s[i][j]);
        printf("\n");
    }  
    
printf("%d",m[1][n-1]);

}