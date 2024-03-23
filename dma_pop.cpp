#include<iostream>
using namespace std;
int main()
{
    int size;
    int *arr;
    cout<<"Enter the size of array :"<<endl;
    cin>>size;
    arr = new int[size];
    if(arr == NULL)
    {
        cout<<"Memory Allocation Failed."<<endl;
        return 1;
    }
    else{
        cout<<"Memory Allocation Successfull."<<endl;
    }

    delete[] arr;
    arr= NULL;

    if(arr == NULL)
    {
        cout<<"Memory Deallocation successfull."<<endl;
    }
    else{
        cout<<"Memory Deallocation Failed."<<endl;
        return 1;
    }
    return 0;
}