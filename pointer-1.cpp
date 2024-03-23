#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a=5;
    ptr = &a;
    cout<<"Value of a :"<<*ptr<<endl;
    cout<<"Address of a :"<<ptr<<endl;
}