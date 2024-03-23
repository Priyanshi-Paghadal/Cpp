#include<iostream>
using namespace std;
class City{
    public:
        int id;
    City()
    {
        id=1;
        cout<<"Welcome to my city .."<<this->id<<endl;
    }
    City(int x)
    {
        this->id = x;
        cout<<"id is :"<<this->id<<endl;
    }
    City(City &obj)
    {
        obj.id=9;
        this->id = obj.id;
    }
    ~City(){
        cout<<"obj is destroyd."<<endl;
    }
};
int main()
{
    City c1;
    City c2(3);

    cout<<"c2 us :"<<c2.id<<endl;

    c2.id=7;

    City c3 = c2; //shallow copy

    cout<<"c3 is :"<<c3.id<<endl;

    City c4(c1); //deep copy

    cout<<"c4 is :"<<c4.id<<endl;

    return 0;
}