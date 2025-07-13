#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any decimal number: "<<endl;
    cin>>n;
    int ans=0;
    int power=1;
    while(n>0)
    {
        int parity_digits=n%2;
        ans+=parity_digits*(power);
        n=n/2;
        power*=10;
       
        
    }
    cout<<"Your binary number is: "<<ans<<endl;
    return 0;
}