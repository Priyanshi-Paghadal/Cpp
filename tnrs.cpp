#include<iostream>
using namespace std;
//TAKE NOTHING RETURN SOMETHING
int cube();
int main()
{
    cout<<cube();
    return 0;
}
int cube()
{
    int i;
    cout<<"Enter i value :"<<endl;
    cin>>i;
    return i*i*i;
}