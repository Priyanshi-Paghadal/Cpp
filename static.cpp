#include<iostream>
using namespace std;

class Student{
    public:
        int grid;
        char name[50];
        int age;
        static char course[50];
        float percentage;

    static void getcourse()
    {
        cout<<course<<", "<<course<<endl;
    }
};

class School{
    public:
        int grid;
        static char name[50];
        int age;
        char course[50];
        float percentage;

};

char Student::course[50] = "DSA";
char School::name[50] = "Priya";

int main()
{
    Student s1,s2;
    s1.grid=12;
    s2.grid=345;
    cout<<s1.grid<<endl;
    cout<<s2.grid<<endl;
    cout<<Student::course<<endl;
    cout<<School::name<<endl;

    Student::getcourse();
    return 0;
}