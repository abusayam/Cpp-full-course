#include <iostream>
using namespace std;

// cntrol statements - switch

/**
 * switch statement provides a better alternative then a large series of if-else statements.
 * switch statements execute one statement from multiple conditions
 * keywords used in the switch statement : switch, case, break, default.
 *
 * switch(expression){
 * case value1:
 *        // code to execute
 *         break;
 * case value2:
 *       // code to execute
 *         break;
 * default:
 *       // code to execute
 * }
 */

int main()
{

    int digit;
    cout << "Enter a digit from 1 to 5 : ";
    cin >> digit;

    switch (digit)
    {
    case 0:
        cout << "Zero";
        break;
    case 1:
        cout << "One";
        break;
    case 2:
        cout << " TWO";
        break;
    case 3:
        cout << " THREE";
        break;
    case 4:
        cout << " FOUR";
        break;
    case 5:
        cout <<"Five";
        break;
    default:
        cout << "invlid digit : Entar a digit between 1 to 5 ";
    }

    return 0;
}