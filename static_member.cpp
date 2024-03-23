#include<iostream>
using namespace std;
class myClass{
    public:
        static int staticVariable;
    static void function(){
        cout<<"hello World.."<<endl;
    }
};
int myClass::staticVariable = 50;
int main()
{
    cout<<myClass::staticVariable<<endl;
    myClass::function();
    return 0;
}