#include<iostream>
using namespace std;
int main()
{
    int b[10],a[10] = {1,1,1,2,2,3,4,4,4,4},ans=0;
    for (int i = 0; i < 10; i++)
    {
        int count= 0;
        int temp = a[i];
        for (int j = 0; j < 10; j++)
        {
            if (a[j]==temp)
            {
                count++;
                cout<<count<<"\n";
            }
            
            
        }
        b[i]=count; 
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<b[i]<<"_";
    }
    
        
    return 0;
}
