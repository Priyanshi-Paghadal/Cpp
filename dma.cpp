#include<iostream>
using namespace std;
int disp(int x , int y)
{
    return x + y;
}
// void rec()
// {
//     cout<<"Hello"<<endl;
//     rec();
// }
int main()
{
    int a=2 , b=5;
    cout<<disp(a,b)<<endl;
    // rec();
    return 0;
}