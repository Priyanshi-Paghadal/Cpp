#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Your Age"<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"You are eligible for votting."<<endl;
    }
    else
    {
        cout<<"You are not eligible for votting."<<endl;
    }
    return 0;
}
