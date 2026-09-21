#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& arr,int target){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={1,2,3,4,5,6};
    
    int target =5;
    
    cout<<search(arr,target);
   
   
    return 0;
}