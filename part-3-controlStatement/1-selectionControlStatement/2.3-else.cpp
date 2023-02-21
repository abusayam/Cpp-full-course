#include <iostream>
using namespace std;

// else if ladder condition

/**
 * if(condition){
 *      // code to be executed
 * }
 * else if(!condition){
 *      // code to be executed
 * }
 * else if(condition){
 *      // code to be executed
 * }
 * else {
 *      // code to be executed // if all conditions is false 
 *          else must be execute and there will not be any condition
 * }
*/

int main(){
    int num;
    cout <<"Enter any integer : ";
    cin >> num;
    
    if(num>0){
        cout<<"positive number";
    }
    else if(num<0){
        cout<<"negative number";
    }
    else {
        cout<<"number is zero";
    }
}