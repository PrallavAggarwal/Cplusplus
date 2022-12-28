#include<iostream>
using namespace std;
int main(){
    int a[5] = {0,0,1,2,0};
    int n=0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i]!=0)
        {
            swap(a[i],a[n]);
            n++;
        }
        
    }
    for (int j = 0; j < 5; j++)
    {
        cout<<a[j]<<"_";
    }
    
}