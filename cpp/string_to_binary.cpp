#include <iostream>
#include <string>
#include <bitset>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: "<<endl;
    cin>>str;
    cout<<"The binary code of your string is: "<<endl;
    for (int i = 0; i < str.size(); i++) {
      cout<<bitset<8>(str[i]) << ' ';
    }
    return 0;
}