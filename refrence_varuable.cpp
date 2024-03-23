#include<iostream>
using namespace std;
int main()
{
    int n =10;
    int &ref = n;
    cout<<"ref is :"<<ref<<"    n is : "<<n<<endl;
    ref=15;
    cout<<"ref is :"<<ref<<"    n is : "<<n<<endl;
    return 0;
}