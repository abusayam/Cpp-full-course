#include <iostream>
using namespace std;

// Nested loop

/**
 * if(condition){ // outer loop
 *
 *       if(condition){ // inner loop
 *
 *       }
 *
 * }
 */

int main()
{

    int mark;

    cout << "Enter your great : ";
    cin >> mark;

    if (mark > 32)
    {   
        if(mark>100||mark<0){
        cout << "invalid marks ";
        }
        else if (mark >= 80)
        {
            cout << "your grade is :  A+";
        }
        else if (mark >= 70)
        {
            cout << "your grade is : A";
        }
        else if (mark >= 60)
        {
            cout << "your mark is : A- ";
        }
        else if (mark >= 50)
        {
            cout << "your grade is : B";
        }
        else if (mark >= 40)
        {
            cout << "your grade is : C";
        }
        else if (mark >= 33)
        {
            cout << "your grade is : D";
        }
    }
    else
    {
        cout << "Fail";
    }
}