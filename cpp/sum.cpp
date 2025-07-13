// sum=1-2+3-4+5-6+.....+n

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter any number: ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
           sum-=i;
        else
           sum+=i;
    }
    cout<<"The sum of your number is: "<<sum;
    return 0;
}