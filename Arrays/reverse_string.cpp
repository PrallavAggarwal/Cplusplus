#include<iostream>
using namespace std;
int main(){
    int k=0,count =0,start=0,end;
    char a[10] = {'P','R','A','L','L','A','V'};
    for (int i = 0; a[i]!=0; i++)
    {
        count++;
    }
    end = count-1;
while (start<=end)
{
    swap(a[start],a[end]);
    start++;
    end--;
}
for (int j = 0; a[j]!=0; j++)
    {
        cout<<a[j];
    }

    

}