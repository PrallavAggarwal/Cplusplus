#include<iostream>
using namespace std;
int AP(int num){
    int term=3*num+7;
    return term;
}
int main(){
    int n;
    cout<<"Enter your number"<<endl;
    cin>>n;
    cout<<"nth term is "<<AP(n)<<endl;
    
}