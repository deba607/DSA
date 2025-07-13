#include<bits/stdc++.h>
using namespace std;

int main(){
    // int a ,b;
    // cout<<"enter number for a: ";
    // cin>>a;
    // cout<<"enter number for b: ";
    // cin>>b;
    // cout<<count(a,b);

    int n ;
    cout<<"Enter n: ";
    cin>>n;
    int originalNum , remainder;
    int count =0;
    int result =0;
    originalNum=n;
    int tempNum =n;
    while(tempNum!=0){
        tempNum /=10;
        count++; 
    }
    tempNum = n;
    while(tempNum!=0){
        remainder = tempNum%10;
        result += (float)pow(remainder,count);
        tempNum /=10;
         
    }  
    if(result==originalNum) cout<<originalNum<<" is Armstrong number ";
    else cout<<originalNum<<" is not Armstrong number ";
    cout<<"\n"<<result<<":Result";
    return 0;
}