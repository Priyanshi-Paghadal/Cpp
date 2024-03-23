#include<iostream>
using namespace std;
void increment(int n)
{
    n=n+10;
}
int main()
{
    int a=5;
    cout<<"Before a : "<<a<<endl;
    increment(a);
    cout<<"after a : "<<a<<endl;
    return 0;
}