#include<iostream>
using namespace std;
void increment(const int &n)
{
     n=n+10; //error occupied
     cout<<n<<endl;
}
int main()
{
    int a=10;
    cout<<"before a : "<<a<<endl;
    increment(a);
    cout<<"after : "<<a<<endl;
    return 0;
}