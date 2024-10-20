#include<iostream>
using namespace std;
int main()
{
    char a,b,c;
    cin>>a>>b;
    if(a >= 77 || b >= 77)
    {
        cout<<"Enter a character less than 'M'"<<endl;
    }
    else
    {
        c=a;
        a=b;
        b=c;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}