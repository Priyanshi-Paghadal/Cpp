#include<iostream>
using namespace std;
int sumOfArray(int a[], int size);
int main()
{
    int size,a[20],sum=0;
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cin>>a[i];
    }
    cout<<sumOfArray(a , size);
    return 0;
}
int sumOfArray(int a[] , int size)
{
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum=sum+a[i];
    }
    return sum;
}