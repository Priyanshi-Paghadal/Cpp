#include<iostream>
using namespace std;
int main()
{
    int a[5]={1 , 2, 3, 4, 5};
    int *p[5];
    for(int i=0; i<4; i++)
    {
        p[i]=&a[i];
        cout<<"Address is : "<<p[i]<<"  ";
        cout<<"Value is : "<<*p[i]<<endl;
    }
    
    return 0;
}