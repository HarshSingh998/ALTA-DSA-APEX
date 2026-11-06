/*
----------------------------------------------------------------------------------------------------------------------
-------------------------------------------- Largest of Three Numbers (Nested If-Else) -------------------------------
----------------------------------------------------------------------------------------------------------------------

Write a program to find and print the largest of three given numbers using nested if-else.

Input: 4 9 6
Output: 9

*/


#include <iostream>
using namespace std;

int main() {

    int a, b, c;

    cout << "Enter Three Numbers: ";
    cin >> a >> b >> c;

    if (a > b) {
        if (a > c) {
            cout << a;
        }
        else {
            cout << c;
        }
    }
    else {
        if (b > c) {
            cout << b;
        }
        else {
            cout << c;
        }
    }

    return 0;
}


