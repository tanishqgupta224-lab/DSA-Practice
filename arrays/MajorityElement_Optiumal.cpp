// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// // Output: 3
#include<bits/stdc++.h>
using namespace std;
int majority(vector<int>&arr){
    int n=arr.size();
    int el;
    int count=0;
    for(int i=0;i<n;i++){
        if(count==0){
            count++;
            el=arr[i];
        }
        else if(el==arr[i]){
            count++;
        }
        else{
            count--;
        }
    }
    int count2=0;
    for(int i=0;i<n;i++){
        if(el==arr[i]){
            count2++;
        }
    }
    if(count2>(n/2)){
        return el;
    }
    else{
        return -1;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<majority(arr);
    return 0;
}