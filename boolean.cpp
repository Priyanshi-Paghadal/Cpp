#include <iostream>
using namespace std;

int main() {
    bool is_sunny = true;
    bool is_raining = false;

    if (is_sunny) {
        cout << "It's a sunny day!\n";
    } else {
        cout << "It's not sunny today.\n";
    }

    bool result = is_sunny && !is_raining;
    cout << "Result of logical operation: " << boolalpha << result << "\n";

    return 0;
}
