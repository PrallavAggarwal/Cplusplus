#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    cin >> n;
    while (i <= n)
    {
       
        int space = n - i;
        while (space)
        {
            cout << " ";
            space=space-1;
        }

        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        if(i>=2){
        int k=1;
        while (k <= i-1)
        {
            cout << i-k;
            k++;
        }
        }
        cout << endl;
        i++;
    }
}