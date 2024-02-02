#include<iostream>
using namespace std;
class student{
    public:
    int no;
    string name;
    bool gender;
};
int main()
{   
    student s1;
    s1.no=1;
    s1.name="Priyanshi";
    s1.gender=1;

    cout<<"No is "<<s1.no<<endl;
    cout<<"Name is "<<s1.name<<endl;
    cout<<"Gender is "<<s1.gender<<endl;
    return 0;
}