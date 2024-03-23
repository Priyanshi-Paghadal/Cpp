#include<iostream>
using namespace std;
class Student{
    public:
        int grid;
        char name[50];
        int age;
        char course[50];
        float percentage;

    void setData()
    {
        cout<<"Enter Grid :";
        cin>>this->grid;
        cout<<"Enter Name :";
        cin>>this->name;
        cout<<"Enter Age :";
        cin>>this->age;
        cout<<"Enter Course :";
        cin>>this->course;
        cout<<"Enter Percentage :";
        cin>>this->percentage;
    }

    void getData()
    {
        cout<<"GR ID :"<<this->grid<<endl
            <<"Name :"<<this->name<<endl
            <<"Age :"<<this->age<<endl
            <<"Course :"<<this->course<<endl
            <<"Percentage :"<<this->percentage<<endl;
    }
    Student *getcurrentobject(){
        return this;
    }
};

int main()
{
    int size;
    cout<<"Enter Student length :";
    cin>>size;
    Student student[size];
    Student *student3;

    for(int i=0; i<size; i++)
    {
        student[i].setData();
    }

    for(int i=0; i<size; i++)
    {
        student[i].getData();
    }

    student3 =student[0].getcurrentobject();
    student3->getData();

    return 0;
}