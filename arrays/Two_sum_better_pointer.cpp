// Given an array of integers nums and an integer target. Return the indices(0 - indexed) of two elements in nums such that they add up to target.

// Each input will have exactly one solution, and the same element cannot be used twice. Return the answer in any order.

// Example 1:
// Input: nums = [1, 6, 2, 10, 3], target = 7

// Output: [0, 1]

// Explanation:

// nums[0] + nums[1] = 1 + 6 = 7
//TWO POINTER APPROACH:-
#include<bits/stdc++.h>
using namespace std;
vector<int>Twosum(vector<int>&nums,int target) {
    int n=nums.size() ;
    //create a pair of array
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++){
        arr[i]={nums[i],i};
    }

    //sort arr  
    sort(arr.begin(),arr.end());
    int left=0,right=n-1;
    while(left<right){
        int sum=arr[left].first+arr[right].first;
        if(sum==target){
            return {arr[left].second,arr[right].second};
        }  
        else if(sum<target){
            left++;
        }  
        else{
            right--;
        }
    }
    return {};

}
int main(){
    
    return 0;
}