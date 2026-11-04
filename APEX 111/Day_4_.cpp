/*
----------------------------------------------------------------------------------------------------------------------
-------------------------------------------- Final Price After Discount and Tax --------------------------------------
----------------------------------------------------------------------------------------------------------------------

Write a program that calculates the final price of an item after applying a 10% discount, then adding 18% tax on the
discounted price.

Input: price = 1000
Output: 1062

*/


#include <iostream>
using namespace std;

int main() {

    double price = 1000;

    double discount = price * 10 / 100;
    double discountedPrice = price - discount;

    double tax = discountedPrice * 18 / 100;
    double finalPrice = discountedPrice + tax;

    cout << "Final Price = " << finalPrice << endl;

    return 0;
}



