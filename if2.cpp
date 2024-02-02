#include<iostream>
using namespace std;
int main()
{
    int byear,age;
    cout<<"Enter Your Birth Year :"<<endl;
    cin>>byear;
    age=2024-byear;
    cout<<"Age :"<<age<<endl;
    if(age>=18)
    {
        cout<<"You can vote."<<endl;
    }
    else{
        cout<<"You Can't Vote."<<endl;
    }
    return 0;
}