#include <iostream>
using namespace std;

int main() {
    for (int x = 1; x<= 20; x++) {
        cout << x;

        if (x % 2 == 0) {
            cout << " is even";
        } else {
            cout << " is odd";
        }

        cout << endl;
    }

    return 0;
}