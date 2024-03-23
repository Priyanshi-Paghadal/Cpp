#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size of array :"<<endl;
    cin>>size;
    int a[size],i;
    cout<<"Enter element of array :"<<endl;
    for(i=0; i<size; i++)
    {
        cin>>a[i];
    }
    int *ptr[size];
    for(i=0; i<size; i++)
    {
        ptr[i]=&a[i];
    }
    cout<<"Array of pointer :"<<endl;
    for(i=0; i<size; i++)
    {
        cout<<*ptr[i]<<"   "<<ptr[i]<<endl;
    }
    return 0;
}