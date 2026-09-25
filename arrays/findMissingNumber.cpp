//Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range.

// Example 1:
// Input: nums = [0, 2, 3, 1, 4]

// Output: 5

// Explanation:

// nums contains 0, 1, 2, 3, 4 thus leaving 5 as the only missing number in the range [0, 5]


#include<bits/stdc++.h>
using namespace std;
int missing(vector<int>& arr){
    int n=arr.size();
    int nsum=(n*(n+1))/2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];

    }
    int miss=nsum-sum;
    
    
    return miss;

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<missing(arr);


    return 0;
}
