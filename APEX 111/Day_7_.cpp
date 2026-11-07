/*
----------------------------------------------------------------------------------------------------------------------
-------------------------------------------- Check Leap Year ---------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------

Write a program to check whether a given year is a leap year (divisible by 4, but not by 100 unless also by 400).

Input: 2024
Output: Leap Year

*/


#include <iostream>
using namespace std;

int main() {

    int year;
    cout << "Enter Year: ";
    cin >> year;

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        cout << "Leap Year";
    }
    else {
        cout << "Not a Leap Year";
    }

    return 0;
}


