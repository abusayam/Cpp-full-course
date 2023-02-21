#include <iostream>
using namespace std;
// write a program that will print leap year

/**@leap year Algorithm
 * 
 * start step 1 -> take integer variable
 * Year  step 2 -> assugn value to the variable
 * step 3 -> chack if YEAR divisible by 4 but not 100, DISPLAY "leap year"
 * step 4 -> chack if YEAR  divisible by 400, DISPLAY "leap year"
 * 
 * setup 5 -> otherwise display "not leap year"
 * 
 * 
*/

int main() {
    int year;
    cout <<"Enter any  year : ";
    cin >> year;

    if(year % 4 == 0 && year % 100 != 0) {
        cout <<"Leap year";
    }
    else if(year % 400 == 0){
        cout <<"Leap year";
    }
    else{
        cout <<"Not Leap year";
    }
}