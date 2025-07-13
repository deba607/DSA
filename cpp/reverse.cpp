#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    int reverse=0;
    while(n>0)
    {
        int last_digits=n%10;
        reverse=reverse*10+last_digits;
        n/=10;
    }
    cout<<"Your reverse number is: "<<reverse;
    return 0;
}