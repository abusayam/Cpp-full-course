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
    cout<<"Enter Elements for the matrix : "<<endl;
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {   
            cout<<"A["<<row<<"]["<<col<<"] = ";
            cin>>A[row][col];
        }
        
    }
    

    // printing 2d array
    for(int row =0; row<2; row++)
   {
           for(int col=0; col<3; col++)
           {
                   cout<< A[row][col] <<" ";
                  
           }
           cout<<endl;
   }

    return 0;
}