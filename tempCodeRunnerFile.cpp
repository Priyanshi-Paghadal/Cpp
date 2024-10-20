#include<iostream>
using namespace std;
bool isPrime(int num);
int main()
{
    int num;
    cout<<isPrime(num);
    return 0;
}
bool isPrime(int num)
{
    // int num;
    cin>>num;
    if(num = num/num)
    {
        cout<<"This is a Prime numbers";
        return 0;
    }
    else {
        cout<<"This is not a Prime numbers";
        return -1;
    }
}