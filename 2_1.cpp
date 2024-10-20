#include <iostream>
using namespace std;
int main() {
    int num,sum=0,remainder;
    cin>>num;
    for(int i=num; i!=0; i=i/10)
    {
        remainder=i%10;
        sum=sum+remainder;
    }
    cout<<sum<<endl;
    return 0;
}
