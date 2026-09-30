// Example 1:
// Input: nums = [1, 2, 5, 3, 1, 2]
// Output: [5, 3, 2]
// Explanation:
// 2 is the rightmost element, 3 is the largest element in the index range [3, 5], 5 is the largest element in the index range [2, 5]
//brute force 
#include<bits/stdc++.h>
using namespace std;
vector<int>majority(vector<int>&nums){
    int n= nums.size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        bool leader=true;
        for(int j=i+1;j<n;j++){
            if(nums[i]<nums[j]){
                leader=false;
                break;
            }
        }
        if(leader==true){
            ans.push_back(nums[i]);
        }

    }
    return ans;
    

}
int main(){
    int n;
    cin>>n;
    vector <int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];

    }

    vector<int> r=majority(nums);
    for(int il:r){
        cout<<il<<" ";
    }

    return 0;
}