#include<iostream>
using namespace std;
int main()
{
    int a,b,choice;
    cin>>a>>b;
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<a+b<<endl;
            break;
        case 2:
            cout<<a-b;
            break;
        case 3:
            cout<<a*b;
            break;
        case 4:
            cout<<a/b;
            break;
        case 5:
            cout<<a%b;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
    return 0;
}