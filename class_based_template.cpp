#include<iostream>
using namespace std;
template <typename T1 , typename T2>
class Pair
{
    private :
        T1 x;
        T2 y;
    public:
        Pair(T1 x , T2 y)
        {
            this->x=x;
            this->y=y;
        }
        void getData()
        {
            cout<<" x is :"<<this->x<<" "<<" y is :"<<this->y<<endl;
        }
};
int main()
{
    Pair<int , double>obj(5 , 7.6);
    Pair<int , int>obj1(5 , 7);
    Pair<double , double>obj2(5.99 , 7.6);
    obj.getData();
    obj1.getData();
    obj2.getData();

    return 0;
}