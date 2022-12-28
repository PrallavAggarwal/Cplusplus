#include <iostream>
using namespace std;
int main()
{
    int a[5] = {-1, -2, 3, 4, 5}, b[2]={2,3},c[15];
    int k=0,temp,sum=0;
    for (int i = 0; i < 5; i++)
    {
        temp = a[i];
        for (int j = 0; j < 2; j++)
        {
            c[k]=temp+b[j];
            k++;
        }
        
    }
    
    for (int n = 0; n < k; n++)
    {
        cout << c[n] << "_";
    }
}