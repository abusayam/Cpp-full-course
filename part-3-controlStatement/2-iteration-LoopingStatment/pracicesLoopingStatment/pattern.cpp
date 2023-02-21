#include<iostream>
using namespace std;


int main(){
    int n, rows, cols;
    cout <<"Enter numbe of lines: ";
    cin >> n;

    for(rows= 1; rows<=n; rows++){
        
        for(cols= 1; cols<=2;cols++){
            cout <<"hello world "<<rows<<" "<<cols << endl;
        }
    }

}