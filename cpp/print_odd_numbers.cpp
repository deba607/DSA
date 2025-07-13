#include<iostream>
using namespace std;
void odd_numbers(int n,int m)
{
    
    if(n<m)
    {
        cout<<"Yours odd numbers are: ";
        for (int i=n;i<=m;i++)
        {
           if(i%2!=0)
              cout<<i<<" ";
             
        }
    }
    else
       cout<<"Please enter your first number small";
}
void prime_numbers(int n,int m)
{
    if(n<m)
    {
    cout<<endl<<"The prime numbers are: ";
	for(int i=n;i<=m;i++)
	{
        int count=0;
        for(int j=1;j<=i;j++)
        {
		   if(i%j==0)
		      count++;
        }
        if(count==2)
          cout<<i<<" ";
	}
    }
   
}
int main()
{
    int n,m;
    cout<<"Enter starting and ending number: ";
    cin>>n;
    cin>>m;
    odd_numbers(n,m);
    prime_numbers(n,m);
    return 0;
}
