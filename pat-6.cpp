#include<iostream>
using namespace std;
/*
    *  *  *
    *       *
    *       *
    *  *  *
    *
    *
    *
    *
*/
int main()
{
    int i;
    for(i=1; i<=8; i++)
    {
        if(i==1 || i==4){
            cout<<"*  *  * ";
        }
        else if(i==2 || i==3){
            cout<<"*      *";
        }
        else{
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}