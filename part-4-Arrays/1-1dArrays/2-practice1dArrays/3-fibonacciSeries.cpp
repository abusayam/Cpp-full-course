#include<iostream>
using namespace std;

/** @Fibonacci series using array
 * 0 1 1 2 3 5 8 13 21.
 * first = 0.
 * secend = 1.
 * fibo = first + secend
 * first = second;
 * second = fibo;
 * 
 * int n, a[30]
 * cin>>n;
 * 
 * a[0];
 * a[1];
 * for(i=2;i<n;i++)
 * a[i-1]=a + a[i-2];
 * 
 * print
 * 
 * for(i=0; i<n;i++)
 * 
 * cout(a[i])
 * 
*/

int main(){
    
    int a[30], n;
    cout<<"how many fibonacci numbers : ";
    cin>>n;

    a[0]=0;
    a[1]=1;

    for (int i = 2; i < n; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }

    cout<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<" " <<a[i];
    }
    
    
}