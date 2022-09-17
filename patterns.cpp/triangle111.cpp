#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    cin >> n;
    while (i <= n)
    {
        int space = i-1; 
        while (space)
        {
            cout<<" ";
            space--;
        }
        

        int j = 1;
        while (j <= n-i+1)
        {
            cout <<j+i-1;// * ki place pr i and then j
            j++;
        }
        cout << endl;
        i++;
    }
}