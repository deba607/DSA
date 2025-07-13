// 123456
// 234561
// 345612
// 456123
// 561234
// 612345

#include<iostream>
using namespace std;
int main()
{
    int j,n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for( j=i;j<=n;j++)
            cout<<j;
        for(int k=1;k<=(i-1);k++)
            cout<<k;
       
    cout<<endl;
    }
    return 0;
}

