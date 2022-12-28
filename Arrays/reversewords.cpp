#include<iostream>
using namespace std;
void reverse(char a[], int start, int end){
    int end2 = end - 1;
    while (start<=end2)
    {
        
        swap(a[start],a[end2]);
        start++;
        end2--;

    }
   

}
int main(){
    int start=0,end,count=0;
    char b[20];
    char a[20]={'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};
    for (int i = 0; a[i]!=0; i++)
    {
        count++;
    }
    end=count-1;
    while (start<=end)
    {
        
        swap(a[start],a[end]);
        start++;
        end--;

    }
    for (int i = 0; i < count; i++)
    {
        cout<<a[i];
    }
    cout<<"\n";
    int j =0;
    for (int i = 0; i <= count; i++)
    {
        if ((a[i] == ' ') || (a[i] == 0))
        {
            reverse(a,j,i);
            j=i+1;
        }
        
    }
    cout<<"reverse string\n";
    for (int i = 0; i < count; i++)
    {
        cout<<a[i];
    }
    
    
    
    


    

    
} 