#include <iostream>
using namespace std;
void getArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void getPrint(int arr[], int n)
{
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << "}" << endl;
}

int getSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = arr[i] + sum;
    }
    return sum;
}

int main()
{
    int n, arr[100];
    cout << "Enter the number of elements\n";
    cin >> n;
    getArray(arr, n);
    cout << "Your array is :";
    getPrint(arr, n);
    cout << "Sum of the elements of your array :" << getSum(arr, n) << endl;
    cout << "End of programme";
}