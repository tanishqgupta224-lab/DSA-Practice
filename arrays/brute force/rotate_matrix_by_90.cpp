// Given an N * N 2D integer matrix, rotate the matrix by 90 degrees clockwise.

// The rotation must be done in place, meaning the input 2D matrix must be modified directly.

// Example 1:
// Input: matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]



// Output: matrix = [[7, 4, 1], [8, 5, 2], [9, 6, 3]]
#include<bits/stdc++.h>
using namespace std;
void rotation(vector<vector<int>>&matrix){
    int n=matrix.size();
    vector<vector<int>>ans(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[j][n-1-i]=matrix[i][j];
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>matrix( n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }

    }
    return 0;

}