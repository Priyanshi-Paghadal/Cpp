#include<iostream>
using namespace std;
int main()
{
    int size,i,j;
    cout<<"Enter array size :"<<endl;
    cin>>size;
    int a[size][size];
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"] :";
            cin>>a[i][j];
        }
    }
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Boundary Element :"<<endl;
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            if(i==0 || i==3 || j==0 || j==3)
            {
                cout<<a[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}