// You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9

// Output: [0,1]
#include<bits/stdc++.h>
using namespace std;
vector<int>twosum(vector<int>&arr,int target){
    int n=arr.size();
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        int num=arr[i];
        int needmore=target-num;
        if(mpp.find(needmore)!=mpp.end()){
            return{mpp[needmore],i};
        }
        mpp[num]=i;

    }
    return{};
    
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    vector<int>ans=twosum(arr,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }


    return 0;
}