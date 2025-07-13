#include<iostream>
using namespace std;
int main()
{
    int array[10];
    cout<<"Enter any 10 numbers: "<<endl;
    for(int i=0;i<10;i++)
       cin>>array[i];
    int target_sum;
    cout<<"Enter your target element: "<<endl;
    cin>>target_sum;

    int paires=0;
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++){
          if(array[i]+array[j]==target_sum)
               paires++;
        }
    }
    if(paires==0)
       cout<<"You have no target elements";
    else
       cout<<"You have: "<<paires<<" paires of target element"<<endl;

 return 0;
}