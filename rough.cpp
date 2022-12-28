#include<iostream>
using namespace std;
main(){
    // int ans=6^2;
    // int sum=0;
    // for (int i = 0; i < 2; i++)
    // {
    //     sum++;
    // }
    // cout<<sum<<endl;
    // cout<<ans;

    // printing array elements
    int a[5];
    int i,j;
    cout<<"enter 5 elements\n";
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    cout<<"printing array\n";
    for (int j = 0; j < 5; j++)
    {
        cout<<a[j]<<"_";
    }

    // printing string
    string name;
    int count=0;
    cout<<"\nEnter your string\n";
    cin.get();
    for (int i = 0; name[i]!=0; i++)
    {
        count++;
    }
    cout<<count;
    cout<<"\n"<<name.length();
    cout<<"\n"<<name;

    // printing string with spaces
    // C++ program to demonstrate getline() function
    string str;
    cout << "Please enter your name: \n";
	getline(cin, str);
	cout << "Hello, " << str
		<< " welcome to GfG !\n";
}