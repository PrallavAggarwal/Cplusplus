#include<iostream>
using namespace std;
int main(){
    int n;
    int i =1;
    cin>>n;
    while (i<=n)
    {
        int j=1;
        while(j<=i){
            char ch = 'A'+n-1-i+j;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
}