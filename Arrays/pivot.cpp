//Selection sorting
/*#include<iostream>
using namespace std;
int main(){
    int a[5] = {64,25,12,22,11};
    int i,j,min,k;
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<"_";
    }
    for ( i = 0; i < 5; i++)
    {
        min = i;
        for ( j = i+1; j < 5; j++)
        {
            if (a[min]<a[j])
            {
                min=j; 
            }
            
        }
        swap(a[min],a[i]);
    }
    cout<<"\n"<<"Sorted array\n";
    for ( k = 0; k < 5; k++)
    {

        cout<<a[k]<<"_";
    }
    
    
}*/

//Bubble sorting
// #include<iostream>
// using namespace std;
// int main(){
//     int a[5] = {64,25,12,22,11};
//     int i,j,max,k;
//     cout<<"Bubble sorting \n";
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<a[i]<<"_";
//     }
//     for ( i = 0; i < 4; i++)
//     {
//         for ( j = 0; j < 4-i; j++)
//         {
//             if (a[j]>a[j+1])
//             {
//                 swap(a[j],a[j+1]);
//             } 
    
//         }
//     }
//     cout<<"\n"<<"Sorted array\n";
//     for ( k = 0; k < 5; k++)
//     {

//         cout<<a[k]<<"_";
//     }
// }

//Insertion Sorting
#include<iostream>
using namespace std;
int main(){
    int a[5] = {64,25,12,22,11};
    int i,j,k;
    cout<<"Insertion sorting \n";
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<"_";
    }
    for ( i = 1; i < 5; i++)
    {
        int temp = a[i];
        j=i-1;
        for ( ; j >=0; j--)
        {
            if (a[j]<temp)
            {
                a[j+1]=a[j];
            }
            else{
                break;
            } 
    
        }
        a[j+1]=temp;
    }
    cout<<"\n"<<"Sorted array\n";
    for ( k = 0; k < 5; k++)
    {

        cout<<a[k]<<"_";
    }
}




    

