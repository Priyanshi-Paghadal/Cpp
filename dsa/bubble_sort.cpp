#include <iostream>
using namespace std;

void bubble_sort(int a[], int n);
void print_sort(int a[], int n);
int main()
{
    int n;
    cout << "Enter array size.." << endl;
    cin >> n;
    int a[n];
    cout << "Enetr Array Element.." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Array element.." << endl;
    print_sort(a, n);
    cout << endl;
    bubble_sort(a, n);
    return 0;
}
void bubble_sort(int a[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }
    cout << "Sorted Element.." << endl;
    print_sort(a, n);
}
void print_sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}