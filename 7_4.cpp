#include <iostream>
using namespace std;
int main() {
    int size,a[10],S,b[10],c[10];
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cin>>a[i];
    }
    cin>>S;
    for(int i=0; i<S; i++)
    {
        b[i]=a[i];
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for(int i=S; i<size; i++)
    {
        c[i]=a[i];
        cout<<c[i]<<" ";
    }
    return 0;
}
