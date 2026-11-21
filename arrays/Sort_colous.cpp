// You are given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

 

// Example 1:

// Input: nums = [2,0,2,1,1,0]

// Output: [0,0,1,1,2,2]

// Explanation:

// The array has two 0s, two 1s, and two 2s. Sorting them in-place places all 0s first, then all 1s, then all 2s.
#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>&nums){
    int n=nums.size();
    int c0=0;
    int c1=0;
    int c2=0;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            c0++;
        }
        else if(nums[i]==1){
            c1++;
        }
        else{
            c2++;
        }
        
    }
    int idx=0;
    for(int i=0;i<c0;i++)nums[idx++]=0;
    for(int i=0;i<c1;i++)nums[idx++]=1;
    for(int i=0;i<c2;i++)nums[idx++]=2;
    


    return ;
}
int main(){
    return 0;
}