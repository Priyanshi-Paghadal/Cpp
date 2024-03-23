#include<iostream>
using namespace std;
//TAKE SOMETHING RETURN SOMETHING
int square(int);
int main()
{
    int i;
    cout<<"square is : "<<square(i);
    return 0;
}
int square(int i)
{
    cout<<"Enter i values :"<<endl;
    cin>>i;
    return i*i;
}