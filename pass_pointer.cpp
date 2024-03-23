#include<iostream>
using namespace std;

void func(int *ptr)
{
    cout<<*ptr<<endl;
}
int main()
{
    int a=7;
    int *p= &a;
    func(p);
    return 0;
}