#include<iostream>
using namespace std;
/*
                1
              1 2
            1 2 3
          1 2 3 4
        1 2 3 4 5
*/
int main()
{
    int i,j,k;
    for(i=1; i<=5; i++)
    {
        for(k=5; k>i; k--)
        {
            cout<<"  ";
        }
        for(j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}