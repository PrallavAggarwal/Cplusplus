#include <iostream>
using namespace std;
bool isPrime(int num)
{

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cout << "Enter ur number" << endl;
    cin >> n;
    if (isPrime(n))
    {
        cout << "Your number is a prime" << endl;
    }
    else
    {
        cout << "Your number is not a prime" << endl;
    }
    return 0;
}