// Given an integer array nums and an integer target. Return all quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

// a, b, c, d are all distinct valid indices of nums.
// nums[a] + nums[b] + nums[c] + nums[d] == target.
// Notice that the solution set must not contain duplicate quadruplets. One element can be a part of multiple quadruplets. The output and the quadruplets can be returned in any order.

// Example 1:
// Input: nums = [1, -2, 3, 5, 7, 9], target = 7

// Output: [[-2, 1, 3, 5]]

// Explanation:

// nums[1] + nums[0] + nums[2] + nums[3] = 7
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>foursum(vector<int>&nums,int target){
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    int n=nums.size();
    
    for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1])continue;
        for(int j=i+1;j<n;j++){
            if(j!=i+1 && nums[j]==nums[j-1])continue;
            int k=j+1;
            int l=n-1;
            while(k<l){
                long long sum=nums[i]+nums[j];
                sum+=nums[k];
                sum+=nums[l];
                if(target==sum){
                    vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k<l  && nums[k]==nums[k-1])k++;
                    while(k<l && nums[l]==nums[l+1])l--;
                    
                }
                else if(target<sum){
                    l--;

                }
                else{
                    k++;

                }
            }
        }
    }
    return ans;


}
int main(){
    return 0;
}