#include<iostream>
using namespace std;
void getPrint(int num[], int n){
    cout<<"Entered array is :"<<"{";
    for (int i = 0; i < n; i++)
    {
        cout<<num[i]<<",";
    }
    cout<<"}\n";
    
}

void getSwap(int num[],int n){
    int i=0;
    while (i < n)
    {
        int l=i+1;
        if(l>=n){
            break;
        }
        else{
            int temp=num[i];
            num[i]=num[i+1];
            num[i+1]=temp;

        }
        i=i+2;
    }
    
}
int main(){
    int n,num[100];
    cout<<"Enter the number of elements\n";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element number "<<i<<" :";
        cin>>num[i];
    }
    getPrint(num,n);
    getSwap(num,n);
    getPrint(num,n);
}