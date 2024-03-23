#include<iostream>
using namespace std;
void func(int n[]);
int main()
{
    int a[3]={2 ,6 ,8};
    func(a);
    return 0;
}
void func(int n[])
{
    for(int i=0; i<3; i++)
    {
        cout<<"n["<<i<<"] : "<<n[i]<<endl;
    }
}