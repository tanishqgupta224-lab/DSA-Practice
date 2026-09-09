#include<bits/stdc++.h>
using namespace std;
int p(vector<int>&arr,int low,int high){
    int pivot=low;
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=arr[pivot] && i<=high){
            i++;
            
        }
        while(arr[j]>arr[pivot] && j>=low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
            
        }
        
    }
    swap(arr[low],arr[j]);
    return j;
    
    
}
void quicksort(vector<int>& arr,int  low,int high){
    if(low<high){
        int pi=p(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);

    }
}
int main(){
    vector<int>arr={3,4,6,5,2,1};
    quicksort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}