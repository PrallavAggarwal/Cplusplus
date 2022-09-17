#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1, k = 1;
        int space = n - i;
        while (k <= space)
        {
            cout << " ";
            k++;
        }

        while (j <= i)
        {
            cout << "*"
                 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}