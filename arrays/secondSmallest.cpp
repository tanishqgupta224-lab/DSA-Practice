#include<bits/stdc++.h>
using namespace std;
int secsmallest(vector<int>arr,int n){
    int smallest=arr[0];
    int secsmall=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            secsmall=smallest;
            smallest=arr[i];
        
        }
        else if(arr[i]<secsmall && arr[i]!=smallest ){
            secsmall=arr[i];

        }
    }
    return secsmall;


}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<secsmallest(arr,n);


    return 0;
}