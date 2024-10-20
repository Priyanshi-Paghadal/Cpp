#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    for (int i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        result[size1 + i] = arr2[i];
    }
}

int main() {
    int size1, size2;
    cout << "Size of first array: ";
    cin >> size1;
    
    int arr1[size1];
    cout << "First Array's Elements:" << endl;
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }
    
    cout << "Size of second array: ";
    cin >> size2;
    
    int arr2[size2];
    cout << "Second Array's Elements:" << endl;
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    int result[size1 + size2];
    mergeArrays(arr1, size1, arr2, size2, result);
    
    cout << "Sample Output:" << endl;
    for (int i = 0; i < size1 + size2; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

