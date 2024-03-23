#include<iostream>
using namespace std;
//method overloading 
class vehicle
{
    public :
        void truck()
        {
            cout<<"Empty truck is running ."<<endl;
        }
        void truck(int n)
        {
            cout<<"Truck is running with "<<n<<" passengers."<<endl;
        }
        void truck(int n , int b)
        {
            cout<<"Truck is running with "<<n<<" passengers. and "<<b<<"goods."<<endl;
        }
};
int main()
{
    vehicle obj;
    obj.truck();
    obj.truck(10);
    obj.truck(10 , 20);
    return 0;
}