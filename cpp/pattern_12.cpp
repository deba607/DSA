//     1
//    2 2
//   3   3
//  4     4
// 555555555

#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    for( i=1;i<=n;i++)
    {
        if(i!=n)
        {
            
           for(int j=1;j<=(n-i);j++)
           {
               cout<<" ";
           }
           for(int j=1;j<=i;j++)
           {
              if(j==1 || j==n)
                 cout<<i;
              else
                 cout<<" ";
           }
           for(int j=i-1;j>=1;j--)
           {
              if(j==1 || j==n)
                 cout<<i;
              else
                 cout<<" ";
           }
            cout<<endl;
        }
        else
        {
          for(int k=1;k<=n;k++)
             cout<<n;
          for(int k=n-1;k>=1;k--)
             cout<<n;
        }
    }
    
    return 0;
}