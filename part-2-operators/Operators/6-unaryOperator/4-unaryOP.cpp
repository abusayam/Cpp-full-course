#include<iostream>
using namespace std;
// Unary operators

int main(){

 /**
  * + Unary plus
  * - Unary minus
  * ++ increment
  * -- Decrement
 */
    int x = 5;
    // increment
    int result = ++x;// prefix increment // increment result before it used
    int result2 = x++;// postfix increment // increment result after it used

    // Decrement
    int result3 = --x;// prefix decrement // decrement result before it used
    int result4 = ++x;// postfix decrement // decrement result after it used
    cout << result << endl;
    
}