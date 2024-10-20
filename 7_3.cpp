#include <iostream>
using namespace std;
int main() {

    int f,s,a[10],b[10],t,c[20];
    cin>>f;
    for(int i=0; i<f; i++)
    {
        cin>>a[i];
    }
    cin>>s;
    for(int i=0; i<s; i++)
    {
        cin>>b[i];
    }
    t=f+s;
    for(int i=0; i<f; i++)
    {
        c[i]=a[i];
    }
    for(int i=0; i<s; i++)
    {
        c[f+i]=b[i];
    }
    for(int i=0; i<t; i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}
