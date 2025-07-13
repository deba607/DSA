//     A
//    ABC
//   ABCDE
//  ABCDEFG
// ABCDEFGHI
//  ABCDEFG
//   ABCDE
//    ABC
//     A

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<char(64+j);
        }
        cout<<endl;
    }
   for(int l=n+1;l<=2*n-1;l++)
   {
     for(int k=0;k<l-n;k++)
     {
        cout<<" ";
     }
     for(int j=0;j<2*(2*n-l)-1;j++)
     {
        cout<<char(65+j);
     }
     cout<<endl;
   }
    return 0;
}