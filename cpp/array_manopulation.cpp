#include<iostream>
using namespace std;
int main()
{
    int array[10];
    cout<<"Enter any 10 numbers: "<<endl;
    for(int i=0;i<10;i++)
       cin>>array[i];
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++){
          if(array[i]==array[j])
               array[i]=array[j]=-1;
        }
    }
     cout<<"Array manopulation: "<<endl;
    for(int i=0;i<10;i++)
    {
        if(array[i]>0)
          cout<<array[i]<<endl;
    }
return 0;
}