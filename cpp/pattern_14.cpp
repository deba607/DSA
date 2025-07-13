//   *  
//   *  
// *****
//   *  
//   *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    if(n%2!=0)
    {
        for(int line=0;line<n;line++)
        {
            for(int i=0;i<n;i++)
            {
                if(i==n/2)
                   cout<<"*";
                else if(line==n/2)
                   cout<<"*";
                else 
                   cout<<" ";
                
            }
            cout<<endl;
        }
    }
    else
       cout<<"Please enter a odd number";
    return 0;
}