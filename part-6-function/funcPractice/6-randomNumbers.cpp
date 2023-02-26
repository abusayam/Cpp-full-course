#include<iostream>
using namespace std;
#include<stdlib.h> // header file to have acess of rand function

int main(){

    for (int i = 0; i < 5; i++)
    {
        int randomNumber = rand()%5 +1;
        cout<< "Random number = "<<randomNumber<<endl;
    }
    
    
    return 0;
}

