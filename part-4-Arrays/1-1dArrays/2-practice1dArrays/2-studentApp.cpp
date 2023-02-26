#include<iostream>
using namespace std;

// take marks input from user ,
// creat a program to and print summetion all marks and Average
// find ninumum and maximun numer of marks and print it


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

    for ( int i = 0; i < n; i++)
    {
        cout<<"Enter number of sdudents : "<<i+1 << " = " ;
        cin>>studets[i];
        sum = sum + studets[i];
    }
    
    cout<<" Total marks   : "<<sum<<endl;

    float avg = (float) sum / n;
    cout<<" Total Average : "<<avg<<endl;
    
    // finding max and min number of studends marks

    int max = studets[0];
    int min = studets[0];

    for (int i = 0; i < n; i++)
    {
        if(max< studets[i]){
            max =studets[i];
        }

        if(min > studets[i]){
            min =studets[i];
        }
    }
    
    cout<<" maximum marks = " <<max<<endl;
    cout<<" minimum marks = " <<min;

 return 0;
}
