#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"How many number you want to store: \n";
    cin>>n;
    vector<int> v(n+1,0);
    cout<<"Enter the numbers: \n";
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    // Calculate the prefix sum array
    for(int i=1;i<=n;i++)
    {
        v[i]+=v[i-1];
    }
        int l,r;
        cout<<"Enter the positions: ";
        cin>>l>>r;

        int ans=0;
        // ans=prefix_sum_array[r]-prefix_sum_array[l-1]
        ans=v[r]-v[l-1];
        cout<<ans<<endl;
    return 0;
}