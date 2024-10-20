#include <iostream>
using namespace std;
class shape{
    public:
    double width,height;
    shape()
    {
        width=0;
        height=0;
    }
    void set(double w ,double h)
    {
        width=w;
        height=h;
    }
};
class rectangle : public shape{
    public:
    void area()
    {
        cout<<width*height<<endl;
    }
};
class triangle : public shape{
    public:
    void area()
    {
        cout<<width*height/2<<endl;
    }
};
int main() {

    rectangle obj;
    triangle obj1;
    int choice;
    cin>>obj.width>>obj.height;
    cin>>choice;
    switch(choice)
    {
        case 1:
            obj.area();
            break;
        case 2:
            obj1.set(obj.width , obj.height);
            obj1.area();
            break;
        default:
            break;
    }
    return 0;
}
