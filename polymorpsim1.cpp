#include<iostream>
using namespace std;
// method overriding
class india
{
    public:
        virtual void wearing()
        {
            cout<<"Dhoti-kurta.."<<endl;
        }
};
class pak : public india 
{
    public:
        void wearing()
        {
            cout<<"Pathani-kurta.."<<endl;
            // india::wearing();
            // india obj;
            // obj.wearing();
        }
};
int main()
{
    india *obj;
    india o1;
    pak o2;
    obj = &o2;
    obj->wearing();
    // aman.wearing();
    o1.wearing();
    return 0;
}