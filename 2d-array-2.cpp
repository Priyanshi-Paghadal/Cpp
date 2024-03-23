#include<iostream>
using namespace std;
int main()
{
    int size,i,j;
    cout<<"Enter size of array :";
    cin>>size;
    int a[size][size],b[size][size],c[size][size];
    cout<<"Enter array element of a:"<<endl;
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"] :";
            cin>>a[i][j];
        }
    }
    cout<<"Enter array element of b:"<<endl;
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            cout<<"b["<<i<<"]["<<j<<"] :";
            cin>>b[i][j];
        }
    }
    cout<<"array element of c:"<<endl;
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}