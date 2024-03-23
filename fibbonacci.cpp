#include <iostream>
using namespace std;

int main() {
    int num1=0,num2=1,num3,N;
    cin>>N;
    cout<<num1<<" "<<num2<<" ";
    num3 = num1+num2;
    for(int i=2; i<N; ++i)
    {
        num3 = num1 + num2;
        cout<<num3<<" ";
        num1 = num2;
        num2 = num3;
    }

    return 0;
}
