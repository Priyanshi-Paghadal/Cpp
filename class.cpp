#include<iostream>
#include<string.h>
using namespace std;
class Student{
    public:
        int grid;
        char name[50];
        int roll_no;
        char course[50];
        float percentage;
};
int main()
{
    Student student1 , student2;
    student1.grid=3733;
    strcpy(student1.name,"Priyanshi");
    student1.roll_no=1;
    strcpy(student1.course,"Full Stack Development");
    student1.percentage=97.71;

    student2.grid=3750;
    strcpy(student2.name,"Radha");
    student2.roll_no=2;
    strcpy(student2.course,"Python Development");
    student2.percentage=93.71;

    cout<<"GR ID :"<<student1.grid<<endl;
    cout<<"Name :"<<student1.name<<endl;
    cout<<"Roll No :"<<student1.roll_no<<endl;
    cout<<"Course :"<<student1.course<<endl;
    cout<<"Percentage :"<<student1.percentage<<endl;

    cout<<"GR ID :"<<student2.grid<<endl;
    cout<<"Name :"<<student2.name<<endl;
    cout<<"Roll No :"<<student2.roll_no<<endl;
    cout<<"Course :"<<student2.course<<endl;
    cout<<"Percentage :"<<student2.percentage;
    return 0;
}