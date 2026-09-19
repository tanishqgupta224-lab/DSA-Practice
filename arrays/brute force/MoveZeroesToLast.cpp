#include<bits/stdc++.h>
using namespace std;
void zero(vector<int>&arr){
    int n=arr.size();
    vector<int>temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);

        }
        
    }
    for(int j=0;j<temp.size();j++){
        arr[j]=temp[j];
    }
    for(int k=temp.size();k<n;k++){
        arr[k]=0;
    }
    return;


}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    zero(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}