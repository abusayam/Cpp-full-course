#include<iostream>
using namespace std;

// vowel / consonant program using switch statement

int main(){
    char ch;

    cout<<"Enter any letter : ";
    cin>>ch;

    ch = tolower(ch);

    switch(ch){
        case 'a':
            cout<<"Vowel";
            break;
        case 'e':
            cout<<"Vowel";
            break;
        case 'i':
            cout<<"Vowel";
            break;
        case 'o':
            cout<<"Vowel";
        case 'u':
        cout<<"Vowel";
        break;
        default:
        cout<<"Consonent";

    }
}