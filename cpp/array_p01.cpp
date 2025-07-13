#include<iostream>
#include<vector>
using namespace std;
void checking_sum(vector<int> &v)
{
    int total_sum=0,b=0;
    for(int i=0;i<v.size();i++)
    {
        total_sum+=v[i];
    }
    int prefix_sum=0;
    for(int i=0;i<v.size();i++)
    {
        prefix_sum+=v[i];
        int suffix_sum=total_sum-prefix_sum;
        if(prefix_sum==suffix_sum) cout<<"True";
        else b++;
    }
    if(b==v.size()) cout<<"False";
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
    checking_sum(v);
}