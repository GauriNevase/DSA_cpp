/* You have been given a 2-D array 'mat' of size 'M x N' where 'M' and 'N' denote the number of rows and columns, respectively.
 // The elements of each row are sorted in non-decreasing order.



// Moreover, the first element of a row is greater than the last element of the previous row (if it exists).



// You are given an integer ‘target’, and your task is to find if it exists in the given 'mat' or not.



// Example:
// Input: ‘M’ = 3, 'N' = 4, ‘mat’ = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]], ‘target’ = 8

// Output: true

// Explanation: The output should be true as '8' exists in the matrix.
*/

#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& mat, int target) {
        int M=mat.size();
        int N=mat[0].size();
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                
                if(mat[i][j]==target){
                    return 1;
                }
                
            }

        }
        return 0;
        
        
}

int main() {
    // Example matrix
    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };

    // Target value to search
    int target = 6;

    // Call the searchMatrix function
    bool result = searchMatrix(matrix, target);

    // Print the result
    if (result) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}
