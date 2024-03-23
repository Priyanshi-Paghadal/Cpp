#include<iostream>
using namespace std;
void func(int *ptr)
{
    cout<<*ptr<<endl;
}
int main()
{
    int a=5;
    func(&a);
    return 0;
}