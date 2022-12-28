#include<iostream>
using namespace std;
int getArray(int n, int a[]){
    int i;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
}
int firstOccurence(int a[],int n, int key){
    int s=0;
    int e=n-1;
    int ans=0;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        if(a[mid]==key){
            ans=mid;
            e=mid-1;
        }
        if(a[mid]<key){
            s=mid+1;
        }
        if(a[mid]>key){
            e=mid-1;
        }
        mid = s + (e-s)/2;

    }
    return ans;
    
}
int lastOccurence(int a[],int n, int key){
    int s=0;
    int e=n-1;
    int ans=0;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        if(a[mid]==key){
            ans=mid;
            s=mid+1;
        }
        if(a[mid]<key){
            s=mid+1;
        }
        if(a[mid]>key){
            e=mid-1;
        }
        mid = s + (e-s)/2;

    }
    return ans;
    
}

int main(){
    int n,a[10];
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int key;
    getArray(n,a);
    cout<<"Enter the element to search for the occurence"<<endl;
    cin>>key;
    int z=firstOccurence(a,n,key);
    cout<<"First Occurence of ur element is "<<z<<endl;
    int y=lastOccurence(a,n,key);
    cout<<"Last Occurence of ur element is "<<y<<endl;
    // if(z==0){
    //     cout<<"Element not found"<<endl;
    // }
    // else
    //     cout<<"your element is at index "<<ans;
}