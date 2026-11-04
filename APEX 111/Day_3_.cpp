/*
---------------------------------------------------------------------------------------------------------------------
-------------------------------------------- Toggle a Boolean Flag ---------------------------------------------------
----------------------------------------------------------------------------------------------------------------------

Write a program that stores a boolean variable representing whether a light is on, prints its state, flips it to the
opposite value without using if-else (direct boolean negation), and prints the new state.

Input: True
Output: On, then Off

*/


#include <iostream>
using namespace std;

int main() {
    
    bool light;

    cout << "=== Light Toggle Program ===" << endl;
    cout << "Enter light status (1 for ON, 0 for OFF): ";
    cin >> light;

    cout << endl;

    cout << "Current Light Status: " << (light ? "On" : "Off") << endl;

    light = !light;

    cout << "New Light Status: " << (light ? "On" : "Off") << endl;

    return 0;
}


