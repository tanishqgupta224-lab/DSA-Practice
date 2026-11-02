// You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9

// Output: [0,1]

// Explanation:

// The sum of nums[0] and nums[1] is 2 + 7 = 9, which equals the target. Therefore, the indices [0, 1] are returned.
#include<bits/stdc++.h>
using namespace std;
vector<int>TwoSum(vector<int>&nums,int target){
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=nums[i]+nums[j];
            if(target==sum){
                return {i,j};
            }
        }
    }
    return{};

}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    vector<int>ans=TwoSum(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";

    }
    

    
    
    return 0;
}