#include<iostream>
using namespace std;

// class oparetor
// Aruthmetic operator

int main(){
    int num1, num2;
    // num1 = 10;
    // num2 = 3;
    cout << "Enter two numbers : " <<endl;
    cin >> num1 >> num2;

    int sum = num1 + num2;
    cout <<"summation is : " << sum <<endl;

    int sub = num1 - num2;
    cout <<"subtraction is : " <<sub <<endl;

    int mult = num1 * num2;
    cout <<"multiplacation is : " <<mult <<endl;

    double div = (float) num1 / num2;//(type casting) change int to floating point as result multiplaction
    cout <<"division is : " <<div <<endl;

    int rem = num1 % num2;
    cout <<"remainder is : " <<rem <<endl;


    return 0;
}