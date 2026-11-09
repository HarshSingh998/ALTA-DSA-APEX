/*
----------------------------------------------------------------------------------------------------------------------
-------------------------------------------- BMI Category (Nested If-Else) -------------------------------------------
----------------------------------------------------------------------------------------------------------------------

Write a program that takes weight (kg) and height (m), computes BMI = weight / height^2, and categorizes it as
Underweight (<18.5), Normal (18.5-24.9), Overweight (25-29.9), or Obese (30+) using nested if-else.

Input: weight = 70, height = 1.75
Output: Normal

*/


#include <iostream>
using namespace std;

int main() {

    double weight, height, bmi;

    cout << "Enter Weight (kg): ";
    cin >> weight;

    cout << "Enter Height (m): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "BMI = " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Underweight";
    }
    else {
        if (bmi < 25) {
            cout << "Normal";
        }
        else {
            if (bmi < 30) {
                cout << "Overweight";
            }
            else {
                cout << "Obese";
            }
        }
    }

    return 0;
}



