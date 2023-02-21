#include <iostream>
using namespace std;

// solving problem with arithmetical operators

/**
 * AREA OF DIFFERENT SHAPES
 * Triangle 
 * rectangle
 * trapezoid
 * ellipse
 * square
 * parallelogram
 * circle
 * sector

*/

int main(){
   double base, height, area;

   cout<<"Enter base : ";
   cin>>base;

   cout<<"Enter height : ";
   cin>>height;

   //area = 1/2 * base * height; // output 0;
   //area = 1.5/2 * base * height; // out corect
   area = (double) 1/2 * base * height; // out corect with (type casting)

   cout<<"Area of triangle : "<<area<<endl;

   return 0; 
}