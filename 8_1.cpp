#include <iostream>
using namespace std;
double calculateAreaSquare(double side);
double calculateAreaRectangle(double length , double width);
double calculateAreaCircle(double radius);
int main() {
    int side,length,width,radius,choice;
    cin>>choice;
    switch(choice)
    {
        case 1:
            cin>>side;
            cout<<calculateAreaSquare(side);
            break;
        case 2:
            cin>>length>>width;
            cout<<calculateAreaRectangle(length , width);
            break;
        case 3:
            cin>>radius;
            cout<<calculateAreaCircle(radius);
            break;
        default:
            break;
    }
    return 0;
}
double calculateAreaSquare(double side)
{
    return side*side;
}
double calculateAreaRectangle(double length , double width)
{
    return length*width;
}
double calculateAreaCircle(double radius)
{
    return 3.14*radius*radius;
}