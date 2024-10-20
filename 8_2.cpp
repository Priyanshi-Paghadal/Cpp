#include <iostream>
using namespace std;
int maxOfThree(int a,int b,int c);
int minOfThree(int a,int b,int c);
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<maxOfThree(a,b,c)<<endl;
    cout<<minOfThree(a,b,c)<<endl;
    return 0;
}
int maxOfThree(int a,int b ,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>c)
    {
        return b;
    }
    else{
        return c;
    }
}
int minOfThree(int a,int b,int c)
{
    if(a<b && a<c)
    {
        return a;
    }
    else if(b<c)
    {
        return b;
    }
    else
    {
        return c;
    }
}