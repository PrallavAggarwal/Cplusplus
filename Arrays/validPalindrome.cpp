#include<iostream>
#include<string>
using namespace std;
// isValid running correctly
bool isValid(char a){
    if ((a>='a'&& a<='z') || (a>='0'&& a<='9') || (a>='A'&& a<='Z'))
    {
        return true;
    }
    return false;
}
char toLowercase(char b){
    char r;
    if (b>='A'&& b<='Z')
    {
        r = (b-'A'+'a');
        return r;
    }
    return b;
}
bool isPalindrome(string a, int end)
{
    int start = 0;
    int n = end-1;
    while (start <= n)
    {
        if (a[start]!=a[n])
        {
            return false;
        }
        
        start++;
        n--;
    }
    return true;
}

int main(){
    string a, temp;
    cout<<"Enter your string\n";
    getline(cin,a);
    int len,j=0,count=0;
    len = a.length();
    cout<<"value of temp before updation\n";
    cout<<temp<<"_";
    
    
    for (int i = 0; i < len; i++)
    {
        if(isValid(a[i])){
            temp[j] = a[i];
            cout<<temp[j];
            j++;
        }
    }
    cout<<"\nvalue of count for temp: "<<j<<endl;
    
    for (int i = 0; i < j; i++)
    {
        temp[i] = toLowercase(temp[i]);
    }
    cout<<"value of temp after lower case\n";
    for (int k = 0; k < j; k++)
    {
        cout<<temp[k];
    }
    cout<<"\n";

    int start =0 , n =j-1, check=0;
    while (start <= n)
    {
        if (temp[start]!=temp[n])
        {
            check = 1;
            break;;
        }
        
        start++;
        n--;
    }
    if (check == 0)
    {
        cout<<"string is palindrome \n";
    }
    else{
        cout<<"string is not palindrome \n";
    }
    


    /*if (isPalindrome(temp,j))
    {
        cout<<"Given string is Palindrome"<<"\n";
    }
    else{
        cout<<"string is not palindrome"<<"\n";
    }*/

    cout<<"value of temp after updation\n";
    for (int k = 0; k < j; k++)
    {
        cout<<temp[k];
    }
    
    cout<<"\nend2 : "<<a<<"\n";
    cout<<temp[8];
    
}