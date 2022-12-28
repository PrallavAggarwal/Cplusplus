#include<iostream>
using namespace std;
int getArray(int n, int a[]){
    int i;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
}
int binary_search(int a[],int n, int key){
    int s=0;
    int e=n-1;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        if(a[mid]==key){
            return mid;
        }
        if(a[mid]<key){
            s=mid+1;
        }
        if(a[mid]>key){
            e=mid-1;
        }
        mid = s + (e-s)/2;

    }
    return 0;
    
}
int main(){
    int n,a[10];
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int key;
    getArray(n,a);
    cout<<"Enter the element to search"<<endl;
    cin>>key;
    int ans=binary_search(a,n,key);
    if(ans==0){
        cout<<"Element not found"<<endl;
    }
    else
        cout<<"your element is at index "<<ans;
}