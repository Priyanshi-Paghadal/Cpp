#include <iostream>
#include <vector>
#include <string>

using namespace std;


int searchName(const vector<string>& names, const string& name) {
    for (int i = 0; i < names.size(); ++i) {
        if (names[i] == name) {
            return i;
        }
    }
    return -1; 
}

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;

    vector<string> names;
    string input;
    
    
    
    for (int i = 0; i < size; ++i) {
        cout << "Enter any value: ";
        cin >> input;
        names.push_back(input);
    }

    cout << "Enter your value: ";
    cin >> input;

    int index = searchName(names, input);
    if (index != -1) {
        cout << "Founded Index: " << index << endl;
    } else {
        cout << "Founded Index: that the name is not in the vector" << endl;
    }

    return 0;
}
