/*
----------------------------------------------------------------------------------------------------------------------
-------------------------------------------- Divisible by Both 3 and 5 -----------------------------------------------
----------------------------------------------------------------------------------------------------------------------

Write a program to check whether a given number is divisible by both 3 and 5.

Input: 45
Output: Yes

*/


#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Number: ";
    cin >> n;

    if (n % 3 == 0 && n % 5 == 0) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}





