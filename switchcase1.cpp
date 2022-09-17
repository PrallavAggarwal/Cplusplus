#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your amount"<<endl;
    cin>>n;
    int g=1;
    int n100,rem100,n50,rem50,n20,rem20,n1,rem1;
    switch (g)
    {
    case 1:
        n100=n/100;
        rem100=n%100;
        cout<<"Number of 100 notes = "<<n100<<endl;

    case 2:
        n50=rem100/50;
        rem50=rem100%50;
        cout<<"Number of 50 notes = "<<n50<<endl;

    case 3:
        n20=rem50/20;
        rem20=rem50%20;
        cout<<"Number of 20 notes = "<<n20<<endl;

    case 4:
        n1=rem20/1;
        rem1=rem20%1;
        cout<<"Number of 1 notes = "<<n1<<endl;
    
    
    }
}