#include<stdio.h>
int n,m,i;
void gks(int n,int m)
{
    // Input The Values.

    float temp,temp1,temp2,temp3;
    int u;
    float w[n]; float p[n]; float y[n]; float x[n]; float w1[n];
    printf("Please enter weight: \n");
    for(i=0;i<n;i++) scanf("%f",&w[i]);
    for(i=0;i<n;i++) w1[i]=w[i];
    printf("Please enter profit: \n");
    for(i=0;i<n;i++) scanf("%f",&p[i]);

    // Step_1: find p[i]/w[i]
    for(i=0;i<n;i++) y[i]=p[i]/w[i];

    // Step_2: Sorting
    
    // printf("Before sorting: \n");
    // for(i=0;i<n;i++) printf("%f\t%f\n",y[i],w[i]);

    for(i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
           if(y[j]<y[j+1])
            {
             temp=y[j];
             y[j]=y[j+1];
             y[j+1]=temp;

             temp1=w[j];
             w[j]=w[j+1];
             w[j+1]=temp1;
            }
        }     
    }

    // printf("After sorting: \n");
    // for(i=0;i<n;i++) printf("%f\t%f\n",y[i],w[i]);

    // Step_3: Finding the results.

    for(i=0;i<n;i++){
        x[i]=0;
        if(w[i]<m){
            x[i]=1;
            m=m-w[i];
        }
        else{
            x[i]=m/w[i];
            x[i+1]=0;
            break;
        }
    }

    //printf("The result is: \n");
    //for(i=0;i<n;i++) printf("%f\n",x[i]);


    // printf("The w1 is: \n");
    // for(i=0;i<n;i++) printf("%f\n",w1[i]);

    // Step_4: Re-located the value of the results.
    
    for(i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(w1[i]==w[j]){
                temp2=x[i];
                x[i]=x[j];
                x[j]=temp2;

                temp3=w[i];
                w[i]=w[j];
                w[j]=temp3;
                
            }
        }
    }
    printf("The Final Result is: \n");
    for(i=0;i<n;i++) printf("%f\n",x[i]);

}
int main()
{
    printf("Please enter n & m: \n");
    scanf("%d%d",&n,&m);
    gks(n,m);
}