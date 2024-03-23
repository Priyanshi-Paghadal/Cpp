#include<iostream>
using namespace std;
template<typename T>
T add(T a , T b)
{
    return a+b;
}
int main()
{
    cout<< add<double>(5.7, 90.99)<<endl;
    cout<<add<int>(3,9)<<endl;
    return 0;
}