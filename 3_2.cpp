#include <iostream>
using namespace std;

void cube(int *num) {
    *num = *num * *num * *num;
}

int main() {
    int N, i, j;

    cout << "Enter array's dimension: ";
    cin >> N;

    int arr[N][N];

    cout << "Enter array elements:"<<endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cube(&arr[i][j]);
        }
    }

    cout << "Cubes of all elements:"<<endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}