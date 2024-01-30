// You are given a 2D matrix 'ARR' (containing either ‘0’ or ‘1’) of size 'N' x 'M', where each row is in sorted order.


// Find the 0-based index of the first row with the maximum number of 1's.


// Note :
// If two rows have the same number of 1’s, return the row with a lower index.

// If no row exists where at-least one '1' is present, return -1.

// Example:
// Input: ‘N’ = 3, 'M' = 3
// 'ARR' = 
// [     [ 1,  1,  1 ],
//       [ 0,  0,  1 ],
//       [ 0,  0,  0 ]   ]

// Output: 0

// Explanation: The 0th row of the given matrix has the maximum number of ones.


#include<iostream>
using namespace std;
#include <vector>

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    //    Write your code here.
    
    
    int rowNo=-1;
    int maxCount=0;

    for(int row=0; row<n; row++){
        int count=0;
        for(int col=0; col<m; col++){
            if(matrix[row][col]==1){
                count++;
               
            }
            if(count>maxCount){
                maxCount=count;
                rowNo=row;
            }
            
        }
    }
    return rowNo;    
}

int main(){
    // Example matrix
    vector<vector<int>> matrix = {
        {1, 0, 1},
        {0, 1, 1},
        {1, 1, 0}
    };

    // Call the function
    int result = rowWithMax1s(matrix, 3, 3);

    // Print the result
    cout << "Row with maximum 1s: " << result << endl;

    return 0;
}
