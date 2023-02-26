#include<iostream>
using namespace std;
#include<stdlib.h> // header file to have acess of rand function

int main(){

    while (1)
    {
       int gussNumber, randomNumber;

       cout<<"Enter your guess between 1 to 5 : ";
       cin>>gussNumber;
       randomNumber = 1 + rand()%5;

        if(gussNumber == randomNumber){

            cout<<"You have won "<<endl<<endl;
        }
        else{

            cout<< "you have lost . try again "<<endl;
            cout<<"Random number was "<<randomNumber<<endl<<endl;
        }
        
    }
    
    
    return 0;
}

