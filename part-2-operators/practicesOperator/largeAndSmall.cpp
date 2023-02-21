#include <iostream>
using namespace std;

// print large and small values between two numbers

int main(){
        int num1, num2;
    cout << "Enter two integer : ";
    cin >> num1 >>num2;

    if(num1<num2) {
        cout << "Larg  number is : "<<num2<<endl;
        cout << "small number is : "<<num1;
    }
    else{
        cout << "Larg  number is : "<<num1<<endl;
        cout << "small number is : "<<num2;
    }
}