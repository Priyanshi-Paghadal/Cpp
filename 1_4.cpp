#include<iostream>
using namespace std;
int main()
{
    int amount,gst;
    float total;
    cin>>amount>>gst;
    
    if(gst == 5 || gst == 12 || gst == 18 || gst == 28)
    {
        total=amount*gst/100;
        cout<<total+amount;
    }
    else{
        cout<<"Enter valid GST rate"<<endl;
    }
    return 0;
}