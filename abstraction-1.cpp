#include<iostream>
using namespace std;
class Future
{
    public :
    //abstract method
        virtual void movephone() = 0;
        virtual void dancephone() = 0;

    //concrete method
    void calling()
    {
        cout<<"Calling can be done via smartphone.."<<endl;
    }
};

class child : public Future{
    public :
        void movephone()
        {
            cout<<"Phone is moving.."<<endl;
        }

        void dancephone()
        {
            cout<<"Phone is dancing.."<<endl;
        }
};

class c :public child{
    public :
        void movephone()
        {
            cout<<"Phone is moving.."<<endl;
        }
};
int main()
{
    c obj;
    obj.calling();
    obj.movephone();
    obj.dancephone();
    return 0;
}