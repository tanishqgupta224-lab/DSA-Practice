// Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
// Return the array in the form [x1,y1,x2,y2,...,xn,yn].
// Example 1:
// Input: nums = [2,5,1,3,4,7], n = 3
// Output: [2,3,5,4,1,7] 
// Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].


#include<bits/stdc++.h>
using namespace  std;
vector<int> shuffle(vector<int>& arr,int k){
    
    vector<int>ans;
    
    for(int i=0;i<k;i++){
        ans.push_back(arr[i]);
        ans.push_back(arr[k+i]);
        
    }
    return ans;



}
int main(){
    int n;
    cout<<"enter number in 2n";
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the number u have to shuffle in 2n";
    cin>>k;
    vector<int>result=shuffle(arr,k);
    for(int val:result){
        cout<<val<<" ";
    }

    
    return 0;
}