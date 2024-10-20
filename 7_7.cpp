#include <iostream>
using namespace std;

int main() {
    int n,p;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                p=0;
            }
            else
            {
                p=1;
            }
        }
    }
    if(p==0)
    {
        cout<<"This is a diagonal matrix";
    }
    else
    {
        cout<<"This is a not diagonal matrix";
    }
    return 0;
}
