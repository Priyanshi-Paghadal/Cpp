#include<iostream>
using namespace std;
//new & delete are operator not keyword
int main()
{
    int *a = new int(6);
    cout<<"Value is :"<<*a<<"\nAddress is :"<<a<<endl;
    delete a;
    //dangling pointer
    cout<<"Value is :"<< *a <<"\nAddress is :"<<a<<endl;

    a = new int[3];

    a[0]=2;
    a[1]=3;
    a[2]=4;

    cout<<"Value is :"<< *a <<"\nAddress is :"<<a<<endl;

    delete[] a;
    
    // dangling pointer

    cout<<"Value is :"<< *a <<"\nAddress is :"<<a<<endl;

    a= NULL;

    cout<<"Value is :"<< *a <<"\nAddress is :"<<a<<endl;

    return 0;
}