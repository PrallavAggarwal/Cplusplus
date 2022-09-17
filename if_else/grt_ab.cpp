#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"write the value of a ";
    cin>>a;
    cout<<"write the value of b ";
    cin>>b;
    if (a<b)
    {
        cout<<"b is greater"<<endl;
    }
    else if (a==b)
    {
        cout<<"value of a and b is same"<<endl;
    }
    else
    {
        cout<<"a is greater"<<endl;
    }
}