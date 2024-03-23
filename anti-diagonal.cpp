#include<iostream>
using namespace std;
/*
    1  2  3  4  5
    6  7  8  9  10
    11 12 13 14 15
    16 17 18 19 20
    21 22 23 24 25
*/
int main()
{
    int i,j,n=1,a[100][100];
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cout<<n<<"  ";
            n++;
        }
        cout<<endl;
    }
    n=1;
    cout<<"Anti-diagonal elements :"<<endl;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(i==0 && j==4 || i==1 && j==3 || i==2 && j==2 || i==3 && j==1 || i==4 && j==0)
            {
                cout<<n<<"  ";
            }
            else{
                cout<<"   ";
            }
            n++;
        }
        cout<<endl;
    }
    return 0;
}