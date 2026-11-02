// 34. Set Matrix Zeroes
// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0. You must do it in place.

// Example 1:
// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]

// Output: [[1,0,1],[0,0,0],[1,0,1]]

// Explanation:

// Element at position (1,1) is 0, so set entire row 1 and column 1 to 0.

#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>>&matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    int row[n]={0};
    int col[m]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;


            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]||col[j]){
                matrix[i][j]==0;
            }
        }
    }


}
int main(){
    
    return 0;
}