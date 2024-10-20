#include<iostream>
using namespace std;
int main()
{
    int size,a[10],R;
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cin>>a[i];
    }
    cin>>R;
    for(int i=R; i<size; i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0; i<R; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

