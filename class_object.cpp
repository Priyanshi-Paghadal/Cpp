#include<iostream>
#include<string.h>
using namespace std;
class mySelf
{
    public:
        char name[20];
        int age;
        char course[20];
        int rollNo;
        float percentage;
};
int main()
{
    mySelf obj;
    strcpy(obj.name,"Priyanshi");
    obj.age=18;
    strcpy(obj.course,"BackEnd Development");
    obj.rollNo=1;
    obj.percentage=97.71;

    cout<<"Name is : "<<obj.name<<endl;
    cout<<"Age is : "<<obj.age<<endl;
    cout<<"Course is : "<<obj.course<<endl;
    cout<<"Roll No is : "<<obj.rollNo<<endl;
    cout<<"Percentage is : "<<obj.percentage<<endl;
    return 0;
}