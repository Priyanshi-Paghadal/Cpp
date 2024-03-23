#include<iostream>
using namespace std;
class student{
    public: 
        string name,stream;
        int no,sem;
        void printmsg(){
            cout<<"welcome "<<name<<endl;
        }
        void data(){
            cout<<"roll no :"<<no<<" ";
            cout<<"stream :"<<stream<<" ";
            cout<<"semester :"<<sem<<" ";
        }
};
int main()
{
    student obj[3];
    cout<<"Enter information"<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<"Enter name :";
        cin>>obj[i].name;
        cout<<"Enter no :";
        cin>>obj[i].no;
        cout<<"Enter sem :";
        cin>>obj[i].sem;
    }
    system("cls");
    for(int i=0; i<3; i++)
    {
        cout<<obj[i].no<<" "<<obj[i].name<<" "<<obj[i].stream<<" "<<obj[i].sem<<endl;
    }
    return 0;
}