/*
--------------------------------------------------------------------------------------------------------------------
-------------------------------------------- Swap Two Numbers Using a Temporary Variable ---------------------------
--------------------------------------------------------------------------------------------------------------------

Write a program to swap the values of two variables using a third (temporary) variable.

Input: a = 5, b = 10
Output: a = 10, b = 5

*/


#include <iostream>
using namespace std;

int main() {

    int a;
    cout << "Enter Your First Number : " ;
    cin >> a;

    int b;
    cout << "Enter Your Second Number : " ;
    cin >> b;

    int temp = a;
    a = b ;
    b = temp ;

    cout << "First Number is : " << a << endl;
    cout << "Second Number is : " << b << endl;

    return 0;
}




/*
! Remember this logic 
- temp = a → Save original a.
- a = b → Put b into a.
- b = temp → Put original a into b.
Think of temp as a temporary storage box that protects the original value.

That's why it is called a temporary variable.
*/