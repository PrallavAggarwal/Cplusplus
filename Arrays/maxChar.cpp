#include<iostream>
using namespace std;
int main(){
    int z =0, max=0, ans;
    string a;
    int b[26] = {0};
    cout<<"enter your word\n";
    cin>>a;
    cout<<"entered word : "<<a<<"\n";

    for (int i = 0; a[i]!=0; i++)
    {
        z = a[i] - 97;
        b[z]++;

    }
    for (int j = 0; j < 26; j++)
    {
        cout<<b[j];
    }
    cout<<"\n";
    
    for (int j = 0; j < 26; j++)
    {
        if (b[j]>max)
        {
            max=b[j];
            ans = j;
        }
        
    }
    char g;
    g = ans+97;
    cout<<g<<"\n";
    cout<<"max time occuring letter is "<<g;

    
    
}