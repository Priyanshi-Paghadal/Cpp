#include<iostream>
using namespace std;
void addition();
void cube(int);
int square();
int multi(int , int);
int main()
{
    addition();
    return 0;
}
void addition()         //TNRN
{
    int a,b,i;
    cout<<"Enter a & b values :"<<endl;
    cin>>a;
    cin>>b;
    cout<<"Addition is : "<<a+b<<endl;
    cube(i);
}
void cube(int i)         //TSRN
{
    cout<<"Enter i value :"<<endl;
    cin>>i;
    cout<<"cube is :"<<i*i*i<<endl;
    cout<<"Square is : "<<square();
}
int square()            //TNRS
{
    int b;
    int p,q;
    cout<<"Enter b value :"<<endl;
    cin>>b;
    return b*b;
    cout<<"multiplication is : "<<multi(p,q);
}
int multi(int p , int q)
{
    cout<<"Enter p & q Values :"<<endl;
    cin>>p;
    cin>>q;
    return p*q;
}