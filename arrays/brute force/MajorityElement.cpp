// Given an integer array nums of size n, return the majority element of the array.

// The majority element of an array is an element that appears more than n/2 times in the array. The array is guaranteed to have a majority element.

// Example 1:
// Input: nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]

// Output: 7

// Explanation:

// The number 7 appears 5 times in the 9 sized array
#include<bits/stdc++.h>
using namespace std;
int majority(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int major=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                major++;
            }
        if(major>(n/2)){
            return arr[i];
        }
        
        }
        return -1;

    }
}
int main(){
    vector<int>arr={7,0,0,1,7,7,2,7,7};
    cout<<majority(arr);


    return 0;
}