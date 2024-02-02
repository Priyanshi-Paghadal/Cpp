#include<iostream>
using namespace std;
class studentinfo{
    public:
    int no;
    string name;
    bool gender;
};
int main()
{
    studentinfo s1,s2,s3;
    s1.no=1;
    s1.name="Priyanshi";
    s1.gender=1;

    s2.no=98;
    s2.name="Radhu";
    s2.gender=1;

    s3.no=67;
    s3.name="Hemanshi";
    s3.gender=1;

    cout<<"no is :"<<s1.no<<endl;
    cout<<"name is :"<<s1.name<<endl;
    cout<<"gender is :"<<s1.gender<<endl;

    cout<<"no is :"<<s2.no<<endl;
    cout<<"name is :"<<s2.name<<endl;
    cout<<"gender is :"<<s2.gender<<endl;

    cout<<"no is :"<<s3.no<<endl;
    cout<<"name is :"<<s3.name<<endl;
    cout<<"gender is :"<<s3.gender<<endl;


}
