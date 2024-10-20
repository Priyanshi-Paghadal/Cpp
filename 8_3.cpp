#include<iostream>
using namespace std;
bool isPrime(int num);
int main()
{
    int num;
    cin >> num;

    if (isPrime(num))
        cout << "This is a Prime number" << endl;
    else
        cout << "This is not a Prime number" << endl;

    return 0;
}
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
        return false;
    }
    return true;

}