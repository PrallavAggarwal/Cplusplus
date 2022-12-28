#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5},i,s=0,e=4;
    while (s<=e)
    {
        swap(a[s],a[e]);
        s++;
        e--;

    }
    cout<<"Reversed array\n";
    for (int k = 0; k < 5; k++)
    {
        cout<<a[k]<<"_";
    }
    

}