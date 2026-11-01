
/*
----------------------------------------------------------------------------------------------------------------------
-------------------------------------------- Age Estimate From Days Lived --------------------------------------------
----------------------------------------------------------------------------------------------------------------------

Write a program that takes the number of days a person has lived and estimates their age using integer division by 365, 
printing both the whole years and the remainder days. 
Input: 7305 
Output: 20 years, 5 days

*/


#include <iostream>
using namespace std;

int main() {

    int days;
    cout << "Enter Your Days You Lived : " ;
    cin >> days;

    int years = days / 365 ;
    int remainingDays = days % 365 ;

    cout << years << " years, " << remainingDays << " days" << endl;

    return 0;
}
