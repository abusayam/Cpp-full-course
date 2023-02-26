#include<iostream>
using namespace std;

int addition(int a, int b);

int main(){

    cout<< addition(10, 20)<<endl;
    int result = addition(30, 40);
    cout<<result;

    
    return 0;
}

int addition(int a, int b){

    int sum = a + b;

    return sum;
}
