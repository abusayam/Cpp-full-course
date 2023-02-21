#include <iostream>
using namespace std;

// a program to print pass or fail results

int main(){
        int mark;
    cout << "Enter two mark : ";
    cin >> mark;

    if(mark>=33) {
        cout << "pass"<<endl;
    }
    else{
        cout << "Fail";
    }
}