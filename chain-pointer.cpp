#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    cout<<"value is :"<<*p1<<" "<<endl;
    cout<<"value is :"<<**p2<<" "<<endl;
    cout<<"value is :"<<***p3<<" "<<endl;
    cout<<"value is :"<<****p4<<" "<<endl;
    return 0;
}