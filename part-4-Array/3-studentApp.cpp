#include<iostream>
using namespace std;

// take marks input from user ,
// creat a program to and print summetion all marks and Average
// find ninumum and maximun numer of marks


/**@Algorithm
 * start
 * number of students
 * array size
 * input marks
 * calculate sum and average , maximum and minimum marks
 * print sum, average, maximim
 * end
 * 
*/

int main(){

    int n, sum = 0 ;
    cout<<"Enter number of sdudents : " ;
    cin>>n;

    int studets[n];

    for ( int i = 1; i < n; i++)
    {
        cin>>studets[i];
        sum = sum + studets[i];
    }
    
    cout<<" Total marks : "<<sum;
    //cout<<" Total Average : "<<sum/n;


 return 0;
}
