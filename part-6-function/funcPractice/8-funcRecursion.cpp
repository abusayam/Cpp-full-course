#include<iostream>
using namespace std;

/** @ Recursion
 * Recursion is a process where a function can call itself
 * To stop calling we need a base case
 * 
 * importent points in case of recursion
 * 
 * Recursion call
 * base case
 * 
 * Example: factorial
 * 
 * 5! = 5* 4* 3* 2* 1*
 * 4! = 4* 3* 2* 1*
 * 3! = 3* 2* 1*
 * 2! = 2* 1*
 * 1! = 1*
 * 
 * n! = n*(n-1)
 * 
 * int(int n){
 *  //base case
 *  if(n==1){
 *      return 1;
 *  }else {
 *          return n* fact(n-1)
 *      }
 * }
 * 
*/

int fact (int n){
        if(n==1)
            return 1;
        else
            return n*fact(n-1);

        
    }


int main(){

    int factorial = fact(4);
    cout<<factorial;


    return 0;
}