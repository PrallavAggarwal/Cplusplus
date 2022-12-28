#include<iostream>
using namespace std;
int main(){
    int n,rem,d=0;
    cin>>n;
    while (n!=0)
    {
        rem=n%10;
        d=d*10 +rem;
        n=n/10;
    }
    cout<<d;
    
}