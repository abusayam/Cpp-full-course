#include<iostream>
using namespace std;

// conditional operator / ternary operator
// ? :
//  Expression1 ? Expression2 : Expression3
/**
 *   int x = 20;
    int y = 20;
    int lareg;

    lareg = x>y ? x : y;

    
 * 
*/

int main(){

    int num1, num2;
    
    num1 = 40;
    num2 = 30;

    int  max = (num1>num2) ? num1 : num2;
    cout << max;

}