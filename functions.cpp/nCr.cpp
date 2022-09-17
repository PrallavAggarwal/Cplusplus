#include <iostream>
using namespace std;
int fact(int z)
{
    int fact = 1;
    for (int i = 1; i <= z; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int a, int b)
{
    int num = fact(a);
    int denom = fact(b) * fact(a - b);
    int ans = num / denom;
    return ans;
}
int main()
{
    int n, r;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "Enter the value of r" << endl;
    cin >> r;
    int answer=nCr(n,r);
    cout<<"nCr = "<<answer<<endl;
}