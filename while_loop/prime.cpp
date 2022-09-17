#include<iostream>
using namespace std;
int main()
{
    int n,i=2,z;
    cout<<"Write your number\n";
    cin>>n;
    while (i<n)
    {
        if (n%i==0)
        {
            cout<<"Not a prime at "<<i<<endl;
           
        }
        else
        {
            cout<<"A prime at "<<i<<endl;
            
        }
        
        i=i+1;
    }
    
}