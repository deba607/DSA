#include<iostream>
#include<vector>
using namespace std;
void running_sum(vector<int> &v)
{
    for(int i=1;i<v.size();i++)
    {
       v[i]+=v[i-1];
    }
}

int main()
{
    int n;
    cout<<"How many number you wnat to store: "<<endl;
    cin>>n;
    vector<int> v;
    cout<<"Enter the numbers: "<<endl;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    running_sum(v);
    for(int i=0;i<v.size();i++)
    {
       cout<<v[i]<<" ";
    }cout<<endl;
}