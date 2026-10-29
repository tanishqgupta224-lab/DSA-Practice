// Given an N * N 2D integer matrix, rotate the matrix by 90 degrees clockwise.

// The rotation must be done in place, meaning the input 2D matrix must be modified directly.

// Example 1:
// Input: matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]



// Output: matrix = [[7, 4, 1], [8, 5, 2], [9, 6, 3]]
#include<bits/stdc++.h>
using namespace std;
void rotation(vector<vector<int>>&matrix){
    int n=matrix.size();
    //to transpose the matrix
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }

    }
    //to reverse the row odd the matrix
    for(int i =0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }


}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }


    return 0;
}
