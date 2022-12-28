#include<iostream>
using namespace std;
int main(){
    int n,ans,d=0,count=0;
    cout<<"Enter the number to convert in binary \n";
    cin>>n;
    while (n!=0)
    {
        ans=n&1;
        
        count++:
        cout<<d;
        n=n>>1;
    }
    

}