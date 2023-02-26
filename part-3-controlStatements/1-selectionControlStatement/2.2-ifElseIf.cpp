#include <iostream>
using namespace std;

// if else syntax

/**
 * if(condition){
 *  //code to be executed  
 * }
 * else if(condition){
 *   //code to be executed
 * }
*/

int main(){
    int num;
    cout <<"Enter a number : ";
    cin >> num;
    
    if(num>0){
        cout<<"positive number";
    }else if(num<0){
        cout<<"negative number";
    }else if (num==0){
        cout<<"number is zero";
    }
    
}