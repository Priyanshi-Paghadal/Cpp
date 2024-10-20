#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a=5;
    ptr= &a;
    cout<<"*ptr : "<<*ptr <<" a : "<<a <<"ptr :"<<ptr<<"&a :"<<&a<<endl;
    return 0;
}