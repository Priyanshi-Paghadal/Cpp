#include<iostream>
using namespace std;
int main()
{
    int a[20][20],r,c,max;
    cin>>r>>c;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }
    max=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(max <= a[i][j])
            {
                max=a[i][j];
            }
        }
    }
    cout<<max<<endl;
    return 0;
}