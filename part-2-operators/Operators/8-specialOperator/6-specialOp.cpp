#include<iostream>
using namespace std;

// Special operator.

/**
 * comma (,)
 * pointer(*)
 * sizeof() //
*/

int main(){

    int a;
    float f;
    double d;
    char ch;
    char name[20];

    // uses of sizeof()
   int c = sizeof(a);

   // uses of comma

   int x, y, sum;
   sum = (x=20, y=30,sum=x+y);


    cout<<sum;

}