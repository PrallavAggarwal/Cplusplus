#include<iostream>
using namespace std;
int main(){
    int a[]={1,3,5,7,9};
    int b[]={2,4,6};
    int m=3;
    int n=5;
    int c[12],k=0,i=0,j=0;
    while (i<n&&j<m)
    {
        if(a[i]<b[j]){
            c[k]=a[i];
            k++;
            i++;
        }
        
        if (a[i]>b[j])
        {
            c[k]=b[j];
            k++;
            j++;
        }
        
        
    }
    while (i<n) 
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while (j<n) 
    {
        c[k]=b[j];
        k++;
        j++;
    }

    int sum = k;
    cout<<sum<<"\n";

    
    
    for (int i = 0; i < sum; i++)
    {
        cout<<c[i]<<"_";
    }
    


}