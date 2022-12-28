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
int getMax(int num[], int n){
    int max=INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i]>max)
        {
            max=num[i];
        }
        
    }
    return max;
}
int getMin(int num[], int n){
    int min=INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i]<min)
        {
            min=num[i];
        }
        
    }
    return min;
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
    cout<<"Maximum value is "<<getMax(num,n)<<endl;
    cout<<"Minimum value is "<<getMin(num,n)<<endl;
    
    
    // int a= INT32_MAX ;
    // int b= INT32_MIN ;
    // cout<<a<<endl;
    // cout<<b<<endl;

}