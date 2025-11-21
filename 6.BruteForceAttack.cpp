#include <iostream>
using namespace std;

int main() {
    int secretNumber = 8; //Numarul pe care il "ghicim"

    cout << "Brute Force Attack starting..." << endl;

    for (int guess = 0; guess<=10; guess++){
        cout << "Trying number:" <<guess<<endl;

        if (guess==secretNumber) {
            cout << "Password found! The number is" << guess << endl;
            break;
        }
    }
}