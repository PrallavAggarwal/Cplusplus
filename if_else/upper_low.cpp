#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Write your character"<<endl;
    cin>>a;
    int z=a;
    if (z>=97&&z<=122)
    {
        cout<<"Your character is lower case\n";
    }
    if (z>=65&&z<=90)
    {
        cout<<"Your character is upper case\n";
    }
    if (z>47&&z<57)
    {
        cout<<"Your character is numeric\n";
    }
    
    
}