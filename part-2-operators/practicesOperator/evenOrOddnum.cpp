#include<iostream>
using namespace std;

 /**
     * Relationel Operator
     * 
     * > greater then
     * >= greater then or equal to
     * <  less then
     * <= less then or equal t
     * == equal
     * != e not equal
     * 
     * a > b // a is greater than b
     * a >= b // a is greater than or equal to b
     * a < b // a is less than b
     * a <= b // a is less than or equal to b
     * a == b // a and b are equal
     * a != b // a and b are not equal
     * 
*/

// Relationel Operator related practice programming

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if(num%2==0) {
        cout << "Even number is : "<<num;
    }
    else{
        cout << "Odd number is : "<<num;
    }
    
}