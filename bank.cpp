#include<iostream>
using namespace std;
class Bank{
    public:
        int balance=6700;
    public:
        void getbalance(int acc)
        {
            if(acc==903)
            cout<<this->balance;
        }
};
int main()
{
    Bank obj;
    obj.getbalance(903);
    return 0;
}