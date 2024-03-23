#include<iostream>
using namespace std;
int main()
{
    int r,c,i,sum=0,j,size;
    cout<<"Enter Row Size :"<<endl;
    cin>>r;
    cout<<"Enter Column Size :"<<endl;
    cin>>c;
    int a[r][c];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"] :";
            cin>>a[i][j];
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            sum=sum+a[i][j];
        }
    }
    size=r+c;
    cout<<"Avg of 2d array :"<<sum/size;
    return 0;
}