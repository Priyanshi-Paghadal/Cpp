#include<iostream>
using namespace std;
//CHAIN OF POINTER
int main()
{
    int a=10;
    // int *p1;
    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    cout<<" a = "<<a<<endl;
    cout<<"p1 is : "<<p1<<"    *p1 is : "<<*p1<<endl;
    cout<<"p2 is : "<<p2<<"    **p2 is : "<<**p2<<endl;
    cout<<"p3 is : "<<p3<<"    ***p3 is : "<<***p3<<endl;
    cout<<"p4 is : "<<p4<<"    ****p4 is : "<<****p4<<endl;
    return 0;
}