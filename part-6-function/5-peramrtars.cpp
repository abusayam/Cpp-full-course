#include<iostream>
using namespace std;

//without perameters static function

void square(){
    int result =5*5;
    cout<<result;
}

// with parameter dynamic function and mutiupl uses

void square(int n){  
    int result =n*n;
    cout<<"square of "<<n<<" = "<<result<<endl;
}


int main(){

    square(); // without perameter static
    square(5); // with perameter dynamic
    square(6);
    square(7);
    
    
    return 0;
}

