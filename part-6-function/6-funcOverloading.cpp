#include<iostream>
using namespace std;

/** Function Overloading
 * 1. multiple function with the same name 
 *      But should be different parameters or different parameters
 * 
*/

void sum(int x){

    cout<<x<<endl;
}

void sum(double x){

    cout<<x<<endl;
}

void sum(int x, int y){

    int add = x+y;
    cout<<add<<endl;
}


void sum(int x, int y, int z){

    int add = x+y+z;
    cout<<add;
}




int main(){
    sum(10);
    sum(10.5);
    sum(20, 10);
    sum(10, 20, 30);

    
    return 0;
}

