#include <iostream>
using namespace std;
int main()
{
    /*int n;
    cin >> n;
    int i = 1;
    int count ;
    while (i <= n)
    {
        int j = 1;
        count = n;
        while (j <= n)
        {

            cout << count;
            count=count -1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    } */
    /*int n;
    cin >> n;
    int i = 1;
    int count =1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {

            cout << count;
            count++;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/

    int n;
    cin >> n;
    int i = 1;
    int count =1;
    char c= 'A' ;
    while (i <= n)
    {
        int j = 1;
        char v = c + i-1;
        while (j <= n)
        {

            cout<< v;
            v++;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}