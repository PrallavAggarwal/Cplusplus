#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Write your number\n";
    cin>>n;
    int sum = 0;
    int i=1,j=2,sum2=0;
    while (i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<<"Sum upto "<<n<<" is "<<sum<<endl;
    while (j<=n)
    {
        sum2=sum2+j;
        j=j+2;
    }
    cout<<"Sum of even numbers between 1 and "<<n<<" is "<<sum2;
}