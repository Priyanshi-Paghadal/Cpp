#include <iostream>
using namespace std;
void insertion_sort(int a[], int n);
void print_sort(int a[], int n);
int main()
{
    int n;
    cout << "Enter size of an array.." << endl;
    cin >> n;
    int a[n];
    cout << "Enter array element.." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Array element.." << endl;
    print_sort(a, n);

    insertion_sort(a, n);
    return 0;
}
void insertion_sort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && key < a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    cout << "Insertion sorted element" << endl;
    print_sort(a, n);
}
void print_sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}