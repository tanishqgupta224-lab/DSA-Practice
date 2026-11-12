// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

 

// Example 1:

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation: 
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ThreeSum(vector<int>&nums){
    int n=nums.size();
    set<vector<int>>stt;
    for(int i=0;i<n;i++){
        set<int>hashset;
        for(int j=i+1;j<n;j++){ 
            int third=-(nums[i]+nums[j]);
            if(hashset.find(third)!=hashset.end()){
                vector<int>temp={nums[i],nums[j],third};
                sort(temp.begin(),temp.end());
                stt.insert(temp);
            }
            hashset.insert(nums[j]);
        }
        
    }
    vector<vector<int>>ans(stt.begin(),stt.end());
    return ans;


}
int main(){
    int n;
    cin>>n;
    
    return 0;
}
