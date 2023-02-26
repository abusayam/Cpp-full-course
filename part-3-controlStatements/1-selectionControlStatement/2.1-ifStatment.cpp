#include<iostream>
using namespace std;

// if syntax

/**
 * if(condition (true or false used ralationen op and logical op ) ){
 *    note: there no uses of semicolon in condition)
 * 
 *   code to be executed // if condition is true;
 *   code will not be executed // if condition is false
 *   
 *  } 
 * 
 *  int num;
 *  cin >> num;
 * 
 *  if(num>0)
 *      cout << "positive";
 * {
 * } node : if more then one condition, then must use second breaked.
*/

int main() {
    // uses of if statement.
    int num;
    cout << "Enter any number : ";
    cin >> num;

    if(num>0)
    cout << "positive";
    if(num<0)
    cout << "negative";
    if(num==0)
    cout <<"zero";

    // this code is executed but there is a problem of performance
     // that to printing one condition but chacking 3 times,


}
