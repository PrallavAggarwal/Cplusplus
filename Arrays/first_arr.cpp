#include<iostream>
using namespace std;
void printArray(int A[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"Printing done"<<endl;
    
}
int main(){
    int first[10]={1,2,3};
    printArray(first,10);
    int second[10]={12,23,45};
    printArray(second,10);
    int garbage[10];
    printArray(garbage,10);
    int third[11]={0};
    printArray(third,10);
    int size=sizeof(first);
    cout<<endl<<"size="<<size/4<<endl;

}