#include<iostream>
using namespace std;

// logical operators

/**
 * we use logical operators when we work with multiple conditions in if and in else if.
 * 1. (&&) logical and operator
 * 2. (||) logical or operator
 * 3. (!) logical not operator
 * 
 * uses of and (&&)
 * 
 * (true && false) // false
 * (true && true) // true
 * (false && false) // false
 * 
 * uses of or (||)
 * 
 * (true || false) // true
 * (true || true) // true
 * (false || false) // false
 * 
 * uses of (!) // not operator
 * 
*/

// write a program - Vowel / constant by || operator

int main(){
    char ch;
    //cout<<"Enter any letter : ";
    //cin>>ch;

    ch = tolower(ch);

    if(ch=='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' /*
    || ch=='A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'*/){

        cout<<" vowel";
    }
    else{
        cout<<"Constant";
    }
 // using && operator
 // write a program to print small / large number among 3 numbers 

    int num1, num2, num3;

    cout <<"Enter 3 numbers :";
    cin>>num1>>num2>>num3;
    
    if(num1 > num2 && num1 > num3){
        cout<<"largest number is : " <<num1;
    }
    else if(num2 > num1 && num2 > num3){
        cout<<"largest number is : " <<num2;
    }
    else {
        cout<<"largest number is : " <<num3;
    }
}

