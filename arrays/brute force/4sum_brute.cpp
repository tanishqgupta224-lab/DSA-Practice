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
vector<vector<int>>ans(vector<int>&nums,int target){
    int n=nums.size();
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    long long sum=nums[i]+nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(target==sum){
                        vector<int>temp={nums[i]+nums[j]+nums[k],nums[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);

                    }
                }
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;


}
int main(){
    return 0;

}
