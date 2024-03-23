#include <iostream>
using namespace std;

int main() {
    int start, end, n, a[100], i, count = 0;

    cout << "Enter start year: ";
    cin >> start;
    cout << "Enter end year: ";
    cin >> end;

    for (n = start, i = 0; n <= end && i < 100; n++) {
        if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
            a[i] = n;
            count++;
            i++;
        }
    }

    cout << "Leap years between " << start << " and " << end << ":" << endl;
    for (i = 0; i < count; i++) {
        cout << a[i] << endl;
    }

    return 0;
}
