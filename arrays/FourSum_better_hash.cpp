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
    set<vector<int>>st;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            set<long long>hashset;
            for(int k=j+1;j<n;j++){
                long long sum=nums[i]+nums[j]+nums[k];
                long long fourth=target-sum;
                if(hashset.find(fourth)!=hashset.end()){
                    vector<int>temp={nums[i],nums[j],nums[k],fourth};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                
                hashset.insert(nums[k]);
            }
        }
    }
    vector<vector<int>>ans{st.begin(),st.end()};
    return ans;
}
int main(){
    return 0;
}