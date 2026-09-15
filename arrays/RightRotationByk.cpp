#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int>& arr,int n,int k){
    k=k%n;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter The Number of Rotation";
    cin>>k;
    rotate(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}