#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter array size :"<<endl;
    cin>>size;
    int a[size],i;
    for(i=0; i<size; i++)
    {
        cout<<"a["<<i<<"] :";
        cin>>a[i];
    }
    cout<<"Your array element :"<<endl;
    for(i=0; i<size; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}