/*
----------------------------------------------------------------------------------------------------------------------
-------------------------------------------- Withdrawal Validity as a Boolean ----------------------------------------
----------------------------------------------------------------------------------------------------------------------

Write a program that prints the boolean result of checking whether a withdrawal amount is positive AND does not exceed
the account balance. Print the True/False result directly, without any message or branching.

Input: balance = 5000, amount = 3000
Output: True

*/

// ! Method - 1

#include <iostream>
using namespace std;

int main() {

    int balance, amount;

    cout << "Enter Balance: ";
    cin >> balance;

    cout << "Enter Withdrawal Amount: ";
    cin >> amount;

    bool isValid = (amount > 0 && amount <= balance);

    cout << boolalpha << isValid;

    return 0;
}





// ! Method - 2

#include <iostream>
using namespace std;

int main() {

    int balance, amount;

    cout << "Enter Balance: ";
    cin >> balance;

    cout << "Enter Withdrawal Amount: ";
    cin >> amount;

    bool isValid = (amount > 0 && amount <= balance);

    cout << (isValid ? "TRUE" : "FALSE");

    return 0;
}










/*

? Logic ->>
• amount > 0 → Withdrawal amount must be positive.
• amount <= balance → Withdrawal amount must not exceed balance.
• && → Both conditions must be true.
• boolalpha → Prints true/false instead of 1/0.

* Note: C++ boolalpha prints lowercase true and false.

*/
