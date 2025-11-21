#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {2, 5, 13, 20, 24};
    int searchNumber;
    bool found = false;

    cout << "Enter a number to search: ";
    cin >> searchNumber;

    for (int x = 0; x < 13; x++){
        if (numbers[x] == searchNumber) {
            found = true;
        }
    }

    if (found) {
        cout << "Number found!" << endl;
    } else {
        cout << "Number NOT found!" << endl;
    } 

    return 0;
}