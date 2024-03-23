#include<iostream>
using namespace std;

int x=100;
int main()
{
    int x=50;
    cout<<"Global x :"<<::x<<endl;
    cout<<"Local x :"<<x<<endl;
    return 0;
}