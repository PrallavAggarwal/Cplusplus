#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    cin >> n;
    while (i <= n)
    {

        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }
        int k = 2;
        if (i > 1)
        {

            while (k <= i)
            {
                cout << "*";
                k++;
            }
        }
        // int space = i-1;
        // while (space)
        // {
        //     cout<<" ";
        //     space--;
        // }

        if (i > 1)
        {
            int h = 1;
            while (h <= i - 1)
            {
                cout << "*";
                h++;
            }
        }

        int l = 1;
        while (l <= n - i + 1)
        {
            cout << n - l + 1;
            l++;
        }

    

        cout << endl;
        i++;
    }
}