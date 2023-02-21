



#include<iostream>
using namespace std;


#include<iomanip> // input output manipulation to use setPrecision;

// class oparetor
// formatting output
// Here is some command
/*
1. showpoint
2. no showPoint
3. setPrecision
4. fixed
5. setw()
*/

int main(){
    float num1, num2;
    // num1 = 10;
    // num2 = 3;
    cout << "Enter two numbers : " <<endl;
    cin >> num1 >> num2;

    cout << showpoint; // here is we are using pormatting to show floating point
    cout <<fixed; // here is
    //cout<< setprecision(10); // countig total number of 10
    cout<< setprecision(2); // countig exat after point 

    float sum = num1 + num2;
    cout <<"summation is : " << sum <<endl;

    //cout<< noshowpoint;

    float sub = num1 - num2;
    cout <<"subtraction is : " <<sub <<endl;

    float mult = num1 * num2;
    cout <<"multiplacation is : " <<mult <<endl;

    double div = num1 / num2;
    cout <<"division is : " <<div <<endl;

    // int rem = num3 % num4;
    // cout <<"remainder is : " <<rem <<endl;


    return 0;
}