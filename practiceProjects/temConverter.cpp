#include<iostream>
using namespace std;
/**
 * celsius to fahrenheit cnverter
 * fahrenheit to celsius cnverter
*/
int main(){
    double farn, cels;

    cout<< "Enter celsius : ";
    cin>> cels;

   farn = 1.8 * cels + 32;

   cout<< "Fahrenheit : "<< farn <<endl;
}