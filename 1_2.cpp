#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    if(num1 == num2)
    {
        if(num1 == num3)
        {
            cout<<"All numbers are same"<<endl;
        }
        else{
            cout<<"First & Second number are same"<<endl;
        }
    }
    else if(num1 == num3)
    {
        cout<<"First & Third number are same"<<endl;
    }
    else if(num2 == num3)
    {
        cout<<"Second & Third number are same"<<endl;
    }
    else{
        if(num1 < num2)
        {
            if(num1 < num3)
            {
                cout<<num1;
            }
            else{
                cout<<num3;
            }
        }
        else{
            if(num2 <num3)
            {
                cout<<num2;
            }
            else{
                cout<<num3;
            }
        }
    }
    return 0;
}