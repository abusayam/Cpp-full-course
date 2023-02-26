#include<iostream>
using namespace std;

/** function how dose it work?
 * 1. input 
 * 
 * 2. function // prosses
 * 
 * 3. output
 * 
 * @ why we need function? 
 * 
 * to not repeat our code if we same work multiple times.
 * 
 * 
*/

void addition(int , int); // prototype of function
void subtraction(int, int);
void division(int, int);
void multiplication(int, int);


int main(){
    
    addition(10, 20);
    subtraction(20, 50);
    division(10, 20);
    multiplication(5, 10);
   
    
    return 0;
}

void addition(int a, int b){

    int sum = a+b;
    cout<<"addition = " <<sum<<endl;


}

void subtraction(int a, int b){

    int sum = a-b;
    cout<<"Subtraction = " <<sum<<endl;


}

void division(int a, int b){

    float sum = (float)a/b; // typecasting a to get result floating point
    cout<<"Division = " <<sum<<endl;


}

void multiplication(int a, int b){

    int sum = a*b;
    cout<<"Multiplication = " <<sum<<endl;


}



