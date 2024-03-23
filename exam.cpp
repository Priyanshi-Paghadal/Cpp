#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,num4,num5,num6;
    cout<<"Enter num1 , num2 , num3 , num4 , num5 & num6"<<endl;
    cin>>num1>>num2>>num3>>num4>>num5>>num6;
    if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 && num1 > num6)
    {
        cout<<"Num1 is maximum :"<<num1<<endl;
    }
    else if(num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5 && num2 > num6)
    {
        cout<<"num2 is maximum :"<<num2<<endl;
    }
    else if(num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5 && num3 > num6)
    {
        cout<<"num3 is maximum :"<<num3<<endl;
    }
    else if(num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5 && num4 > num6)
    {
        cout<<"num4 is maximum :"<<num4<<endl;
    }
    else if(num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4 && num5 > num6)
    {
        cout<<"num5 is maximum :"<<num5<<endl;
    }
    else{
        cout<<"num6 is maximum :"<<num6<<endl;
    }
    return 0;
}