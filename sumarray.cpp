#include<iostream>
using namespace std;
int main()
{
    int size,sum=0;
    cout<<"Enter array size :";
    cin>>size;
    int a[size];
    for(int i=1; i<=size; i++)
    {
        cout<<"a["<<i<<"] :";
        cin>>a[i];
    }
    for(int i=1; i<=size; i++)
    {
        sum=sum+a[i];
    }
    cout<<"avg of array :"<<sum/size<<endl;
    return 0;
}