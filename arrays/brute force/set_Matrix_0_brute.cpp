
// 34. Set Matrix Zeroes
// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0. You must do it in place.

// Example 1:
// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]

// Output: [[1,0,1],[0,0,0],[1,0,1]]

// Explanation:

// Element at position (1,1) is 0, so set entire row 1 and column 1 to 0.
#include<bits/stdc++.h>
using namespace std;
//function for making the row -1
void markRow(vector<vector<int>>&matrix,int n,int m,int i){
    for(int j=0;j<m;j++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;

            
        }
    }

}
//function for making the  column -1
void markCol(vector<vector<int>>&matrix,int n,int m,int j){
    for(int i=0;i<n;i++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }

}
//funtion for making the matrix  row and column zeroes
void setZeroes(vector<vector<int>>&matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           markRow(matrix,n,m,i);
           markCol(matrix,n,m,j);

        }
    }
    //making the marked -1 zeroes
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
    }


}
int main(){
    return 0;

}