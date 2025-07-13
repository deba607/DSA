#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any binary number: "<<endl;
    cin>>n;
    int ans=0;
    int power=1;
    while(n>0)
    {
        int last_digits=n%10;
        if(last_digits==0||last_digits==1)
        {
            ans+=last_digits*(power);
            n=n/10;
            power*=2;
        }
        else 
        {
           cout<<"It's not a binary number Please enter a binary number: "<<endl;
           break;
        }
       
        
    }
    cout<<"Your decimal number is: "<<ans<<endl;
    return 0;
}
