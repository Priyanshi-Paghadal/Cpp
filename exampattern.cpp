#include<iostream>
using namespace std;
/*
    @ @ @ @ @ @ @ @ @ @
    % % % % % % % % %
    @ @ @ @ @ @ @ @
    % % % % % % %
    @ @ @ @ @ @
    % % % % %
    @ @ @ @
    % % %
    @ @
    %
*/
int main()
{
    int i=1,row=10;
    while(i<=row)
    {	int j=1;
        while(j<=row-i+1)
        {
            if(i%2==1)
            {
                cout<<"@ ";
            }
            else{
                cout<<"% ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

