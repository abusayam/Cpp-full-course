#include<iostream>
using namespace std;

// definitions of Array
// Array a collection of variables of the same type

/**@array emlelents initializations
 * int marks[5] // Array size 5 // declaration
 * marks[0] marks[1] marks[2] marks[3] marks[4] // arra index
 * marks[0]=10 ; marks[1]=20; marks[2]=35; marks[56]; ... //array size initialization

 initializations array during declaration
*/

int main(){
     
	
    int marks[5]; // array declaration

    marks[0] = 35; // array initialization 
    marks[1] = 45;
    marks[2] = 40;
    marks[3] = 50;
    marks[4] = 55;

    cout << marks[0]<<" "; 
    cout << marks[1]<<" ";
    cout << marks[2]<<" ";
    cout << marks[3]<<" ";
    cout << marks[4]<<" ";

    int marks1[5]{55, 45, 35, 25, 85}; // array declaration and initializati together.

    for(int i = 0; i <=5; i++){ // array print with with loop statment
        cout<<marks1[i]<<" ";


    }

}
