// Given an integer array nums, return a list of all the leaders in the array.

// A leader in an array is an element whose value is strictly greater than all elements to its right in the given array. The rightmost element is always a leader. The elements in the leader array must appear in the order they appear in the nums array.

// Example 1:
// Input: nums = [1, 2, 5, 3, 1, 2]

// Output: [5, 3, 2]

// Explanation:

// 2 is the rightmost element, 3 is the largest element in the index range [3, 5], 5 is the largest element in the index range [2, 5]
#include<bits/stdc++.h>
using namespace std;
vector<int> leader(vector<int>&arr){
    int n=arr.size();
    vector<int>ans;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
            
        }
        maxi=max(maxi,arr[i]);
        
    }
    sort(ans.begin(),ans.end());
    return  ans;

}
int main(){
    vector<int>arr={1,2,5,3,1,2};
    vector<int>r=leader(arr);
    for(int x:r){
        cout<<x<<" ";
    }
    return 0;
}
