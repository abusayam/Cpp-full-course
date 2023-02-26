#include<iostream>
using namespace std;

/**
 * Declaration of 2d Array
 * data_type array_name [row_size][col_size]
 * 
 * Number of elements = row * columns
 *  = 3 * 4
 *  =12
 * 
 * int A[3][4]
 * 
 *  for(i=0;  i<num_row; i++)
 *  {
 *          for(j=0; j<num_col; j++)
 *          {
 *                  cout<< A[i][j]
 *          }
 *  }
*/

int main (){

    int A[2][3];

    A[0][0] = 10;
    A[0][1] = 20;
    A[0][2] = 30;

    A[1][0] = 40;
    A[1][1] = 50;
    A[1][2] = 60;

    // cout<<A[1][2]; // single

  int  B[2][3] = {

        {70, 80, 90},
        {100, 200, 300}
    };

    for(int row =0; row<2; row++)
   {
           for(int col=0; col<3; col++)
           {
                   //cout<< A[row][col] <<" ";
                   cout<< B[row][col] <<" ";
           }
           cout<<endl;
   }

    return 0;
}