#include<iostream>
using namespace std;
int power(int y,int u){
    int ans=1;
    for (int i = 0; i < u; i++)
    {
        ans=ans*y;
    }
    cout<<ans<<endl;

}
int main(){
    int a,b;
    cin>>a>>b;
    power(a,b);
    
}