#include <iostream>
using namespace std;
/*bool isPal(char b[], int end){
    int start =0;
    while (start<=end)
    {
        while(33<b[start]<47){
            start++;
        }
        while(33<b[end]<47){
            end++;
        }
        if (b[start]!=b[end])
        {
            return false;
        }
        
    }
    return true;

}*/
bool isPalindrome(string a, int end)
{
    int start = 0;
    while (start <= end)
    {
        if (a[start]!=a[end])
        {
            return false;
        }
        
        start++;
        end--;
    }
    return true;
}
int main()
{
    int k = 0, count = 0, start = 0, end;
    string a;
    cout<<"Enter your string\n";
    cin>>a;
    for (int i = 0; a[i] != 0; i++)
    {
        count++;
    }
    end = count - 1;
    if (isPalindrome(a, end))
    {
        cout << "String is palindrome"
             << "\n";
    }
    else
    {
        cout << "String is not a palindrome"
             << "\n";
    }


//Ignoring symbols
    /*cout<<"Now checking palindrome or not by ignoring symbols"<<"\n";
    int cout2 = 0, end2;
    char b[10];
    cout<<"test1"<<"\n";
    int f;
    cin>>f;
    for (int i = 0;b[i]!=0; i++)
    {
        cout<<"test2"<<"\n";
        cin>>b[i];
        cout<<"test3"<<"\n";
    }
    for (int i = 0;b[i]!=0; i++)
    {
        cout2++;
    }
    end2 = cout2-1;
    if(isPal(b,end2)){
        cout<<"String is palindrome";
    }
    else
        cout<<"not a palindrome";*/

}
    
    