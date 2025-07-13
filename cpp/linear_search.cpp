#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter any 5 elements: "<<endl;
    for(int i=0;i<5;i++)
      cin>>arr[i];
    int key;
    cout<<"Enter your searching element: "<<endl;
    cin>>key;
    for(int i=0;i<5;i++)
    {
      if(arr[i]==key)
        cout<<"Your searching element is there: "<<i<<"-->"<<arr[i]<<endl;
    }
    return 0;
}