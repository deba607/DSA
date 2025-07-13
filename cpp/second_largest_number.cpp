#include<iostream>
using namespace std;

int largest_element_index(int arr[],int size)
{
    int max=INT16_MIN;
    int max_index=-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
           max=arr[i];
           max_index=i;
    }
    return max_index;
}
int main()
{
  int arr[10];
  cout<<"Enter any 5 numbers: "<<endl;
  for(int i=0;i<5;i++)
     cin>>arr[i];
  int index_of_largest=largest_element_index(arr,5);
  cout<<"largest element: "<<arr[index_of_largest]<<endl;


  arr[index_of_largest]=-1;
  int index_of_second_largest=largest_element_index(arr,5);
  cout<<"second largest element: "<<arr[index_of_second_largest]<<endl;
  
  return 0;
}